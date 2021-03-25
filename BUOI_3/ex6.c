#include<stdio.h>
#include<math.h>

int main(){
	int n;
	float x, s = 1;
	printf("Enter the number n: ");
	do {
		scanf("%d", &n);
		if(n < 2)
			printf("Enter the number n again: ");
	}while(n < 2);

	printf("Enter the number x: ");
	scanf("%f", &x);

	for(int i = 1; i <= n; i++){
		s += pow(-1, i)*pow(x, i)/i;
	}
	printf("s = %.2f", s);

	return 0;
}
