#include<stdio.h>

int main(){
    int n;
    int checkSoLe = 0;
    int checkSoChan = 0;
    printf("Nhap n = ");
    scanf("%d", &n);

    while(n != 0){
        if((n % 10) % 2 == 0)
            checkSoLe = 1;
        else 
            checkSoChan = 1;
        n /= 10;
    }

    if(checkSoChan == 0)
        printf("Yes");
    else if(checkSoLe == 0)
        printf("No");
    else 
        printf("Bye");
    return 0;
}