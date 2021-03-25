#include<stdio.h>

int main(){
	long n, m, k;
	int sum = 0;
	printf("Enter n, m, k: ");
	scanf("%li%li%li", &n, &m, &k);

	while(n != 0){
		sum += n % 10;
		n /= 10;
	}

	while(m > 10){
		m /= 10;
	}

	if(sum + m == k)
		printf("Yes");
	else 
		printf("No");

	return 0;
}
