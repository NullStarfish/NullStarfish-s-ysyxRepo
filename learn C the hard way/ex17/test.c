#include <stdio.h>
int main() {
	FILE *pt = fopen("111.txt", "w+");
	int a = 1;
	fwrite(&a, sizeof(int), 1, pt);
	int b;
	rewind(pt);
	fread(&b, sizeof(int), 1, pt);
	printf("%d", b);
	return 0;

	
}
