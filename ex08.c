#include <stdio.h>
void main() {
	
	//���ǹ�: if~, if ~else~, if ~else if~ else~, switch ~case~ break
	
	int edps, db, pg, tot = 0;
	//scanf("��ǻ���Ϲ� ����: %d\n", &edps); 
	//scanf("�����ͺ��̽� ����: %d\n", &db);
	//scanf("���α׷��� ����: %d\n", &pg);
	printf("��ǻ���Ϲ�: ");
	scanf("%d", &edps);
	printf("�����ͺ��̽�: ");
	scanf("%d", &db);
	printf("���α׷���: ");
	scanf("%d", &pg);
	
	char pass = 'F';
	float avg = 0.0f;
	
	
	//if~
	//���� ����� 60 �̻��̸�, pass�� 'T', �ƴϸ� 'F'
	tot = (edps + db + pg);
	avg = (float) tot / 3;
	
	if(avg>=60) pass = 'T';		
	
	//pass�� 'T'�̸� "�հ�", 'F'�̸� "���հ�"
	if(pass=='T') {
		printf("�հ�\n");
	} else {
		printf("���հ�\n");
	}

	
	//����� 90 �̻��̸� "��", 80 �̻��̸� "��", 70 �̻��̸� "��"
	//60 �̻��̸� "��", 60 �̸��̸� "��"�� ���
	
	if (avg>=90) {
			printf("��\n");
	} else if (avg>=80) {
			printf("��\n");
	} else if (avg>=70) {
			printf("��\n");
	} else if (avg>=60) {
			printf("��\n");
	} else {
			printf("��\n"); 
	}
	
	
	//���� ��� ���� - � �����̶� 95 �̻��̸� "������", �ƴϸ� "����"
	
	if(edps>=95 || db>=95 || pg>=95) {
		printf("������\n");
	} else {
		printf("����\n");
	}
	
	
	//������� - ��� ������ 90 �̻��̸� "������л�", �ƴϸ� "�Ϲ�"
	
	if(edps>=95 && db>=95 && pg>=95) {
		printf("������л�\n");
	} else {
		printf("�Ϲ�\n");
	} 
	
	
	//��� - 10���� ���� ��. ����  10 �Ǵ� 9�̸� 1���, 8�̸� 2���
	//7�̸� 3���, �������� 5��� (switch~case~break Ȱ��)
	
	int grade = avg / 10;
		printf("���: ");
	
	switch(grade) {
		case 10:
		case 9:
			printf("1���\n");
			break;
		case 8:
			printf("2���\n");
			break;
		case 7:
			printf("3���\n");
			break;
		default:
			printf("5���\n");
	}
	
	
} 
