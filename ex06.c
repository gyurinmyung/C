#include <stdio.h>
void main() {
	
	//��Ʈ������ (&, |, ^, ~, <<, >>)
	int a = 20, b = 30;
	
	printf("a&b: %d\n", a&b);		//and -> 20
	printf("a|b: %d\n", a|b);		//or -> 30
	printf("a^b: %d\n", a^b);		//xor -> 10
	printf("~a: %d\n", ~a);			//complement -> -21
	printf("a>>2: %d\n", a>>2);		//������ ����Ʈ. ������ 2�� �� �� -> 5
	printf("a<<2: %d\n", a<<2);		//���� ����Ʈ. ���ϱ� 2�� �� �� -> 80
	
	
	//��Ÿ������
	int rank = a>b ? 1 : 2;			//���׿�����
	int c = 50, d = 60;				//��ǥ������
	printf("a>b ? 1 : 2 => %d\n", rank);	//���� ������ ��� -> 2 
	
}
