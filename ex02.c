#include <stdio.h>
void main(){
	//�Ǽ�: �ε� �Ҽ����� (���� ū ���� ���� ���� ���� ����)
	//��ȣ, ����, ���� ������ �̷���
	//�Ҽ��� �Ʒ� ���� �ڸ������� ��µ�
	
	float a = 3.141592;					//4byte: ���� 8��Ʈ, ���� 23��Ʈ 
	double b = 274.123478657649;		//8byte: ���� 11��Ʈ, ���� 
	long double c = a + b;				//8byte
	char d = 'a';						//1byte
	unsigned char e = 'b';				//2byte
	
	printf("a = %.20f\n", a);
	printf("b = %.20f\n", b);
	printf("c = %lf\n", c);
	printf("d = %.c\n", d);
	printf("e = %.c\n", e);
	
}
