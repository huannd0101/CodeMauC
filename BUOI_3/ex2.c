#include<stdio.h>

int main(){
    long long n;
    printf("Enter the number n: ");
    do {
        scanf("%lli", &n);
        if(n < 2 || n > 1e9)
            printf("Enter the number again: ");
    }while(n < 2 || n > 1e9);

    for(long long i = 2; i <= n; i++){
        while(n % i == 0){
            printf("%lli ", i);
	        n /= i;
            if(n >= i)
		        printf("* ");
        }   
    }

    return 0;
}