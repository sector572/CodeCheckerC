#include <stdio.h>
#include "test1.h"
#include "test2.h"
#include "test3.h"
#include "test4.h"

int main() {
	printf("Start program\n");

	printf("Проверка: Ошибка двойного освобождения памяти. Ошибка\n");
	mem_multiple_free();

	printf("Проверка: Ошибка с межпроцедурным вычислением индекса. Ошибка\n");
	test_buffer_index();

	printf("Проверка: Ошибка разыменование нулевого указателя. Предупреждение о недостижимости кода\n");
	test_null_pointer_dereference_warning();

	printf("Проверка: Ошибка разыменование нулевого указателя. Ошибка\n");
	test_null_pointer_dereference();

	printf("End program");
	return 0;
}
