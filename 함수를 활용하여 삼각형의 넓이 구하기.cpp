// �Լ��� Ȱ���Ͽ� �ﰢ���� ���� ���ϱ�  

int calculation(int bottom, int area);
int value;

#include <stdio.h>
main ( ) {
	int number1, number2;
	printf ("�ﰢ���� �غ��� ���̸� �Է��ϼ���. : ");
	scanf ("%d %d", &number1, &number2);
	value = calculation(number1, number2);
	printf ("�ﰢ���� ���̴� %d�Դϴ�.", value);

}

int calculation(int bottom, int area) {
	value = bottom * area / 2;   // �غ� x ���� /(������) 2  
	return value; 
}

