#include <stdio.h>

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

void ChenPhanTu(int a[], int *n, int k, int x){
    if(k>0 && k<=*n){
        int i;
        for(i=*n; i>=k-1; i--)
            a[i] = a[i-1];
        *n = *n+1;
        a[k-1] = x;

        XuatMang(a, *n);
    }else
        printf("-1");
}

void Xoa( int a[], int *n, int vt){
    if(vt>0 && vt<=*n){
        int i;
        for(i=vt-1; i<*n-1; i++)
            a[i] = a[i+1];
        *n = *n-1;
    }
}

void XoaPhanTuY(int a[], int *n, int y){
    int i, kt=0;
    for(i=0; i<*n; i++){
        while(a[i]==y){
            kt=1;
            Xoa(a,&*n,i+1);
        }
    }
    if(kt==0)
        printf("-1");
    else
        XuatMang(a,*n);
}

int main(){
    int i, a[50], n, y;
    NhapN(&n);
    NhapMang(a, n);

    int k,x;
    printf("Nhap k = ");
    scanf("%d", &k);
    printf("Nhap x = ");
    scanf("%d", &x);
    ChenPhanTu(a, &n, k, x);

    printf("\nNhap y = ");
    scanf("%d", &y);
    XoaPhanTuY(a, &n, y);

    return 0;
}
