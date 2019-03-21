#include <stdlib.h>

// CWE-126: Buffer Over-read
// Пример ошибки с межпроцедурным вычислением индекса

int plusOne(int x1){
  int x2;
  if (x1 >= 10){ 
    x2 = 10; 
  } else {
  	x2 = x1;
  }
  int res= x2 + 1; 
  return res; 
} 

int buf11[11]; 
int innerAccess1(int a){ 
  int idx = plusOne(a); 
  return buf11[idx]; 
} 

int buf5[5]; 
int innerAccess2(){ 
int idx = plusOne(4); 
  return buf5[idx]; 
} 

void test_buffer_index() {
	innerAccess1(10);
	innerAccess2();
}