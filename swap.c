#include<stdio.h>

void swap (int *x, int *y);

int main(){
	int x, y;

	printf("uso de la función swap: \n");
	x = 15;
	y = 20;
	printf("x: %d\n", x);	
	printf("y: %d\n\n", y);
	printf(">swap(&x, &y)\n");
	swap(&x, &y);
	printf("x: %d\n", x);	
	printf("y: %d\n\n", y);
	return 0;
}

void swap (int *px, int *py){

	/* intercambia *px por *py */
	
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
