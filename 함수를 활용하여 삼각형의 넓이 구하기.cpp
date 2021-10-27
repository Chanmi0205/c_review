// 함수를 활용하여 삼각형의 넓이 구하기  

int calculation(int bottom, int area);
int value;

#include <stdio.h>
main ( ) {
	int number1, number2;
	printf ("삼각형의 밑변과 높이를 입력하세요. : ");
	scanf ("%d %d", &number1, &number2);
	value = calculation(number1, number2);
	printf ("삼각형의 넓이는 %d입니다.", value);

}

int calculation(int bottom, int area) {
	value = bottom * area / 2;   // 밑변 x 높이 /(나누기) 2  
	return value; 
}

