// scanf, for�� Ȱ���Ͽ� �����ﰢ�� ����ϱ�

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


