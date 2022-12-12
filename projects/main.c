#include <stdio.h>

int main() {
	int x, y, d;
	float z;

	printf("enter x: ");
	scanf("%d", &x);
	printf("ebter y: ");
	scanf("%d", &y);
	printf("enter action: \n");
	printf("1 - addition\n");
	printf("2 - substraction\n");
	printf("3 - multiplation\n");
	printf("4 - division\n");
	scanf("%d", &d);

	if (d == 1) {
	    z = x + y;
	    printf("%d + %d = %f\n", x,y,z);
	}
	else if ( d == 2) {
            z = x - y;
	    printf("%d - %d = %f\n", x,y,z);
	}
	else if (d == 3) {
	    z = x * y;
	    printf("%d * %d = %f\n", x,y,z);
	}
	else if (d == 4) {
	     if (y == 0) {
		printf("inccorrect action!");
	     }
	    else {
	        z = (float)x / y;
	        printf("%d / %d = %f\n", x,y,z);
	    }
	}
	else {
		printf(" incorrect action!");
	}
	return 0;
} 
