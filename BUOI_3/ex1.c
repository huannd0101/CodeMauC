#include<stdio.h>
#include<math.h>
int main(){
    int n, counter = 0;
    printf("Enter the number n: ");
    do {
        scanf("%d", &n);
        if(n <= 0)
            printf("Enter the number n again: ");
    }while(n <= 0);

    if(n < 2)
        counter++;
    else 
        for(int i = 2; i <= sqrt(n); i++)
            if(n % i == 0)
                counter++;
    
    if(counter == 0)
        printf("%d la so nguyen to", n);
    else 
        printf("%d khong la so nguyen to", n);
    
    return 0;
}