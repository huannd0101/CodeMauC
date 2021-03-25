#include<stdio.h>
#include<math.h>

int main(){
	int n, gt = 1;
	float x, s = 1;
	printf("Enter the number n: ");
	do {
		scanf("%d", &n);
		if(n < 3)
			printf("Enter the number n again: ");
	}while(n < 3);

	printf("Enter the number x: ");
	scanf("%f", &x);
	
	for(int i = 1; i <= n; i++){
		gt *= i;
		s += pow(x, i) / gt;
	}

	printf("s = %.2f", s);
	return 0;
}
