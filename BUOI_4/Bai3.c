#include<stdio.h>
#include<math.h>
void Input(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int TongSoChinhPhuong(int a[], int n){
    int i, sum = 0;
    for(i = 0; i < n; i++)
        if(sqrt(a[i]) == (int)sqrt(a[i]))
            sum += a[i];
    return sum;
}

int TongSoChiaHet(int a[], int n){
    int i, sum = 0;
    for(i = 0; i < n; i++)
        if(a[i] % 3 == 0 || a[i] % 4 == 0)
            sum += a[i];
    return sum;
}

int main(){
    int n, i, a[50];
    printf("Enter the number n: ");
    do {
        scanf("%d", &n);
        if(n < 3 || n > 50)
            printf("Enter the number n again: ");
    }while(n < 3 || n > 50);

    Input(a, n);

    printf("Tong so chinh phuong: %d", TongSoChinhPhuong(a, n));

    printf("\nTong so chia het cho 3 va 4: %d", TongSoChiaHet(a, n));

    return 0;
}