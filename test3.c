#include <stdlib.h>

// CWE-476: NULL Pointer Dereference
// https://cwe.mitre.org/data/definitions/476.html

// При анализе чувствительном к путям, ошибка в данном коде не должна обнаруживаться
// Зато должна обнаруживаться "Не досягаемый код"

int g;
void null_pointer_dereference(int a, int b){
    int* p = 0;
    if (a > b) { p = &g; }
    if (a > b + 1) { *p = 6; }
}

void test_null_pointer_dereference(){
    null_pointer_dereference(5, 7);
	null_pointer_dereference(7, 6);
	null_pointer_dereference(6, 6);
}

