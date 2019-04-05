#include <stdio.h>
#include <stdlib.h>

// Тест на проверку к путям выполнения. Не должен вызывать ошибок.
// Если файл открывается, он всегда закрывается.

void work_with_file(int condition){
	FILE *fp;
	int flag;
	if(condition){
		fp = fopen("example.txt", "r");
		flag = 1;
	} else {
		flag = 0;
	}

	if(flag){
		fclose(fp);
	}
}


void test_ps_no_errors1(){
	int v1 = rand() % 1000;
	work_with_file(v1);
}