#include "test1.h"
#include "test2.h"
#include "test3.h"

int main() {
	printf("Start program");

	printf("Проверка: Ошибка двойного освобождения памяти.");
	mem_multiple_free(); // Ошибка двойного освобождения памяти

	printf("Проверка: Ошибка с межпроцедурным вычислением индекса");
	test_buffer_index(); // Пример ошибки с межпроцедурным вычислением индекса

	printf("Проверка: Ошибка разыменование нулевого указателя");
	test_null_pointer_dereference();

	printf("End program");
	return 0;
}
