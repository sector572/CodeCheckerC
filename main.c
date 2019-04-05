#include <stdio.h>
#include <stdlib.h>

#include "test1.h"
#include "test2.h"
#include "test3.h"
#include "test4.h"
#include "test6.h"

int main(int argc, char*argv[]) {
	printf("Start program\n");

	if(argv[1]){
		int vflag_file = atoi(argv[1]);

		if (vflag_file == 1 || vflag_file == 888){
			printf("Проверка: Ошибка двойного освобождения памяти. Ошибка\n");
			mem_multiple_free();
		}

		if (vflag_file == 2 || vflag_file == 888){
			printf("Проверка: Ошибка с межпроцедурным вычислением индекса. Ошибка\n");
			test_buffer_index();
		}

		if (vflag_file == 3 || vflag_file == 888){
			printf("Проверка: Ошибка разыменование нулевого указателя. Предупреждение о недостижимости кода\n");
			test_null_pointer_dereference_warning();
		}

		if (vflag_file == 4 || vflag_file == 888){
			printf("Проверка: Ошибка разыменование нулевого указателя. Ошибка\n");
			test_null_pointer_dereference();
		}

		if (vflag_file == 6 || vflag_file == 888){
			printf("Проверка: На чувствительность к путям выполнения. Код без ошибок\n");
			test_ps_no_errors1();
		}
	}
	printf("End program");
	return 0;
}
