#include <stdio.h>

int main (){

	//varivaveis
	int a, b , c;

	//entrada
	scanf("%i %i %i", &a, &b, &c);

	//A COMO MENOR 
	if (a < b && b < c) {
		printf("%i\n%i\n%i\n\n", a, b, c);
		printf("%i\n%i\n%i\n", a, b, c);
	}
	if (a < c && c < b) {
		printf("%i\n%i\n%i\n\n", a, c, b);
		printf("%i\n%i\n%i\n", a, b, c);
	}
	
	//B COMO MENOR
	if (b < a && a < c) {
		printf("%i\n%i\n%i\n\n", b, a, c);
		printf("%i\n%i\n%i\n", a, b, c);
	}
	if (b < c && c < a) {
		printf("%i\n%i\n%i\n\n", b, c, a);
		printf("%i\n%i\n%i\n", a, b, c);
	}
	
	//C COMO MENOR
	if (c < b && b < a) {
		printf("%i\n%i\n%i\n\n", c, b, a);
		printf("%i\n%i\n%i\n", a, b, c);
	}
	if (c < a && a < b) {
		printf("%i\n%i\n%i\n\n", c, a, b);
		printf("%i\n%i\n%i\n", a, b, c);
	}




	return 0;
	}


