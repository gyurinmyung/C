#include <stdio.h>
void main(){
	
	short a = 32768;				//short는 2byte니까 -32768 ~ 32767로 표현됨
	unsigned short b = 32768; 		//0 ~ 65535  (unsigned: 부호 없는 단정도 정수. 양수로만 표현됨)
	int c = 1004;					//4byte
	unsigned int d = 1005;			//4byte
	long e = 300;					//4byte		자바에선 8byte지만 C에선 4byte 
	unsigned long f = 400;			//4byte
	int age = 26;					//4byte니까 2의 32승 
	
	printf("단정도 정수: %d\n", a);
	printf("부호 없는 단정도 정수: %d\n", b);
	printf("일반 정수: %d\n", c);
	printf("부호 없는 일반 정수: %d\n", d);
	printf("배정도 정수: %d\n", e);
	printf("부호 없는 배정도 정수: %d\n", f);
	printf("당신의 나이는 %d입니다.", age);
}
