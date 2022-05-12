// scanf, for문 활용하여 직각삼각형 출력하기

#include <stdio.h>
main ( ) {
	int a, b, c;
	scanf ("%d", &c);
	for ( a=0; a<=c; a++ ) {
		for ( b=0; b<=c; b++ ) {
			if ( a==b || a>b ) 
			printf ("*");
			else
			printf (" ");
		}
		printf ("\n");
	}
} 


