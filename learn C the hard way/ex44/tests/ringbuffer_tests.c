#include "minunit.h"
#include <ringbuffer.h>
#include <assert.h>

static RingBuffer *buffer = NULL;
char *data = "test";
#define DATA_LEN 4
#define BUFFER_LEN 8

char *test_create()
{
    buffer = RingBuffer_create(8);
    mu_assert(buffer != NULL, "Failed to create ring buffer.");
    mu_assert(buffer->length == BUFFER_LEN + 1, "Wrong buffer length.");
    return NULL;
}

char *test_destroy()
{
    mu_assert(buffer != NULL, "Failed to make ring buffer #2");
    RingBuffer_destroy(buffer);

    return NULL;
}

char *test_write_read()
{
    int rc = RingBuffer_write(buffer, data, DATA_LEN);
    mu_assert(rc == DATA_LEN, "Failed to write data to buffer.");

    char target[DATA_LEN];
    rc = RingBuffer_read(buffer, target, DATA_LEN);
    mu_assert(rc == DATA_LEN, "Failed to read data from buffer.");
    mu_assert(memcmp(target, data, DATA_LEN) == 0, "Data read is incorrect.");

    return NULL;
}

char *all_tests() {
    mu_suite_start();

    mu_run_test(test_create);
    mu_run_test(test_write_read);
    mu_run_test(test_destroy);

    return NULL;
}

RUN_TESTS(all_tests);