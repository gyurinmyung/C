#include <stdio.h>
void main() {
	
	//비트연산자 (&, |, ^, ~, <<, >>)
	int a = 20, b = 30;
	
	printf("a&b: %d\n", a&b);		//and -> 20
	printf("a|b: %d\n", a|b);		//or -> 30
	printf("a^b: %d\n", a^b);		//xor -> 10
	printf("~a: %d\n", ~a);			//complement -> -21
	printf("a>>2: %d\n", a>>2);		//오른쪽 쉬프트. 나누기 2를 두 번 -> 5
	printf("a<<2: %d\n", a<<2);		//왼쪽 쉬프트. 곱하기 2를 두 번 -> 80
	
	
	//기타연산자
	int rank = a>b ? 1 : 2;			//삼항연산자
	int c = 50, d = 60;				//쉼표연산자
	printf("a>b ? 1 : 2 => %d\n", rank);	//삼항 연산의 결과 -> 2 
	
}
