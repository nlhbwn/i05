#include <stdio.h>

int main() {
	int x, y, z, d;

	printf("Vvdedite x: ");
	scanf("%d", &x);
	printf("Vvedite y: ");
	scanf("%d", &y);
	printf("Vvedite deistvie:\n");
	printf("1 - slojenie\n");
	printf("2 - vychitanie\n");
	printf("3 - umnojenie\n");
	printf("4 - delenie\n");
	scanf("%d", &d);

	if (d == 1) {
		z = x + y;
		printf("%d + %d = %d\n", x,y,z );
	}
	else if (d == 2) {
		z = x - y;
		printf("%d - %d = %d\n", x,y,z);
	}
	else {
		printf("Nevernoe deistvie!");
	}
	return 0;
}

