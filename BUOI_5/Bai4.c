#include<stdio.h>
#include<math.h>

void Input(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void Output(int a[], int n){
    int i;
    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void ChangeArray1(int a[], int n){
    int i;
    for(i=0; i<n; i++)
        if(a[i]==0)
            continue;
        else if(a[i]%2==0)
            while(a[i]%2==0)
                a[i]/=2;
    
}

int IsPrime(int n){
    int i;
    if(n < 2)   
        return 0;
    for(i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;
}

int FindPrime(int n){
    if(n < 2)
        return 2;
    int tmp1, tmp2;
    tmp1=tmp2=n;
    while(IsPrime(tmp1)==0){
        tmp1--;
    }
    while(IsPrime(tmp2)==0){
        tmp2++;
    }
    if(n-tmp1 < tmp2-n || n-tmp1 == tmp2-n)
        return tmp1;
    else 
        return tmp2;
}

void ChangeArray2(int a[], int n){
    int i;
    for(i=0; i<n; i++)
        if(IsPrime(a[i]) == 0)
            a[i] = FindPrime(a[i]);
}

int main(){
    int n, i, a[50];
    int b[50];
    do {
        scanf("%d", &n);
    }while(n<3 || n >50);
    Input(a, n);
    for(i=0; i<n; i++)
        b[i] = a[i];
    //a
    ChangeArray1(a, n);
    Output(a, n);
    //b
    ChangeArray2(b, n);
    Output(b, n);
    return 0;
}