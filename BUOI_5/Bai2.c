#include<stdio.h>

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
}

int CountElement(int a[], int n, int x){
    int count = 0, i;
    for(i=0; i<n; i++)
        if(a[i]<x)
            count++;
    return count;
}

float TBC(int a[], int n){
    float s = 0;
    int count = 0, i;
    for(i=0; i<n; i++)
        if(a[i]%3==0 && a[i]%5!=0){
            count++;
            s+=a[i];
        }
    if(count==0)
        return 0;
    else
        return s/count;
}

void CheckArray(int a[], int n){
    int checkIncrease = 0, checkDecrease = 0, i;
    for(i=0; i<n-1; i++)
        if(a[i] > a[i+1])
            checkIncrease = 1;
        else if(a[i] < a[i+1])
            checkDecrease = 1;
    if(checkIncrease == 0 || checkDecrease == 0)
        printf("\nYES");
    else 
        printf("\nNO");
}

int main(){
    int n, i, a[50], x;
    
    do {
        scanf("%d", &n);
    }while(n<3 || n >50);
    Input(a, n);
    //a
    scanf("%d", &x);
    printf("%d", CountElement(a, n, x));
    //b
    printf("\n%.2f", TBC(a, n));
    //c
    CheckArray(a, n);

    return 0;
}