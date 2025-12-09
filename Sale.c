#include <stdio.h>

int main() {
	float A,B,C;
	printf("Price#1:");
	scanf("%f",&A);
	C = A + C;
	B = (C*0.95);
	B = B*1.07;
	printf("After Discount 5% + Vat 7% :%.2f\n",B);
	
	printf("Price#2:");
	scanf("%f",&A);
	C = A + C;
	B = (C*0.85);
	B = B*1.07;
	printf("After Discount 15% + Vat 7% :%.2f\n",B);
	
	printf("Price#:");
	scanf("%f",&A);
	C = A + C;
	B = B*1.07;
	printf("After Discount 30% + Vat 7% :%.2f\n",B);

    return 0;
}
