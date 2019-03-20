#include <stdlib.h>

// Ошибка двойного освобождения памяти

void test_free(void *p) {
	free(p);
}

void test_bar() {
	void *q = malloc(1);
	free(q);
	test_free(q);
}
void test_baz() {
	void *q = malloc(1);
	test_free(q);
	free(q);
}

void mem_multiple_free(){
	test_bar();
	test_baz();
}