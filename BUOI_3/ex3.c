#include<stdio.h>

int main(){
    long n, counter = 0;
    printf("Enter the number n: ");
    do {
        scanf("%li", &n);
        if(n < 1 || n > 1e6)
            printf("Enter the number n again: ");
    }while(n < 1 || n > 1e6);

    for(long i = 2; i <= n; i++){
        int tmp = 0;
        long i2 = i;
        while(i2 != 0){
            if(i2 % 10 != 4 && i2 % 10 != 7)
                tmp = 1;
            i2 /= 10;
        }
        if(tmp == 0){
            printf("%li ", i);
            counter++;
        }
    }
    printf("\n%li", counter);
    return 0;
}