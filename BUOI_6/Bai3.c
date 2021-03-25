#include<stdio.h>
#include<math.h>

void NhapN(int *n){
    printf("Nhap n = ");
    do{
        scanf("%d", n);
        if(*n<3 || *n>50)
            printf("Nhap lai n = ");
    }
    while(*n<3 || *n>50);
}

void NhapMang(int a[], int n){
    int i;
    for( i=0; i<n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n){
    int i;
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
}

void SapXep(int a[], int n){
    int i, j;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int SNT(int n){
    if(n < 2)
        return 0;
    int i;
    for(i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;
}

void ChenPhanTu(int a[], int *n, int vt, int x){
    int i;
    for(i=*n; i>=vt-1; i--)
        a[i] = a[i-1];
    a[vt-1] = x;
    *n = *n + 1;
}

void ChenX(int a[], int *n, int x){
    int i;
    for(i=0; i<*n; i++)
        if(SNT(a[i]) == 1){
            ChenPhanTu(a, n, i+2, x);
            i++;
        }
}

int main(){
    int n, x, a[50];
    NhapN(&n);
    NhapMang(a, n);
    SapXep(a, n);
    XuatMang(a, n);

    printf("\nNhap x = ");
    scanf("%d", &x);
    ChenX(a, &n, x);
    XuatMang(a, n);

    return 0;
}