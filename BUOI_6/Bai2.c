#include<stdio.h>

void NhapN(int *n){
    printf("Nhap n = ");
    do{
        scanf("%d", n);
        if(*n<3 || *n>50)
            printf("Nhap lai n = ");
    }
    while(*n<3 || *n>50);
}

void NhapMang(float a[], int n){
    int i;
    for( i=0; i<n; i++){
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void XuatMang(float a[], int n){
    int i;
    for(i=0; i<n; i++)
        printf("%.f ", a[i]);
    printf("\n");
}

void BienDoiMang1(float a[], int n){
    int i;
    for(i=0; i<n; i++)
        while(a[i] - (int)a[i])
            a[i] = a[i] * 10;
}

void BienDoiMang2(float a[], int n){
    int i;
    for(i=0; i<n; i++)
        if(a[i] >= 10){
            int temp = ((int)a[i] % 100) / 10;
            if(temp % 2 == 0)
                a[i] = 0;
            else 
                a[i] = 1;
        }
}

int main(){
    int n;
    float a[50];
    NhapN(&n);
    NhapMang(a, n);
    BienDoiMang1(a, n);
    XuatMang(a, n);

    BienDoiMang2(a, n);
    XuatMang(a, n);

    return 0;
}