#include <stdio.h>
void main(){
	
	short a = 32768;				//short�� 2byte�ϱ� -32768 ~ 32767�� ǥ����
	unsigned short b = 32768; 		//0 ~ 65535  (unsigned: ��ȣ ���� ������ ����. ����θ� ǥ����)
	int c = 1004;					//4byte
	unsigned int d = 1005;			//4byte
	long e = 300;					//4byte		�ڹٿ��� 8byte���� C���� 4byte 
	unsigned long f = 400;			//4byte
	int age = 26;					//4byte�ϱ� 2�� 32�� 
	
	printf("������ ����: %d\n", a);
	printf("��ȣ ���� ������ ����: %d\n", b);
	printf("�Ϲ� ����: %d\n", c);
	printf("��ȣ ���� �Ϲ� ����: %d\n", d);
	printf("������ ����: %d\n", e);
	printf("��ȣ ���� ������ ����: %d\n", f);
	printf("����� ���̴� %d�Դϴ�.", age);
}
