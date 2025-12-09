#include <stdio.h>

int main() {
	float A,B,C;
	printf("Price#1:");
	scanf("%f",&A);
	C = A + C;
	B = (C*0.95);
	printf("After Discount 5% :%.2f\n",B);
	
	printf("Price#2:");
	scanf("%f",&A);
	C = A + C;
	B = (C*0.85);
	printf("After Discount 15% :%.2f\n",B);
	
	printf("Price#:");
	scanf("%f",&A);
	C = A + C;
	B = (C*0.70);
	printf("After Discount 30% :%.2f\n",B);

    return 0;
}
