#include <stdio.h>
#include <stdlib.h>
typedef int (*dataCmp)(void* a, void* b);

void swap(void* a, void* b, size_t size) {

    char* temp = malloc(size);

    if (temp == NULL) {

        // 处理错误，比如退出或返回错误码

        return;

    }

    memcpy(temp, a, size);

    memcpy(a, b, size);

    memcpy(b, temp, size);

    free(temp);

}
void merge(int a[], int low, int mid, int high)
//将a[low..mid]和a[mid+1..high]两个相邻的有序子序列归并成一个有序子序列a[low..high]
{
	int i = low, j = mid + 1, k = 0;
	int* tampa;
	tampa = (int*)malloc((high - low + 1) * sizeof(int));//临时存放数组
	while (i<=mid&&j<=high)//扫描1表和2表
	{
		if (a[i] <= a[j])
		{
			tampa[k] = a[i];
			i++; k++;
		}
		else
		{
			tampa[k] = a[j];
			j++; k++;
		}
	}
	while (i <= mid)//将1表剩下的放进去
	{
		tampa[k] = a[i];
		i++; k++;
	}
	while (j <= high)//将2表剩下的放进去
	{
		tampa[k] = a[j];
		j++; k++;
	}
	for (k = 0, i = low; i <= high; i++, k++)//将tampa复制回a中
	{
		a[i] = tampa[k];
	}
	free(tampa);
}
void mergePass(int a[], int length, int n)//一趟二路归并排序
{
	int i;
	for (i = 0; i + 2 * length - 1 < n; i = i + 2 * length)
	{
		merge(a, i, i + length - 1, i + 2 * length - 1);
	}
	if (i + length - 1 < n)//若余下两个子表,后者长度小于length
	{
		merge(a, i, i + length - 1, n - 1);//归并这两个表
	}
}
void merge_sort(int a[], int n)//二路归并算法
{
	int length;
	for (length = 1; length < n; length = 2 * length)
	{
		mergePass(a, length, n);
	}
}
int main() {
    int a[] = {1, 2, 5, 6, 3, -1, 3};
    int size = 7;
    merge_sort(a, size);
    for (int i = 0; i < size; i ++)
        printf("%d ", a[i]);
}