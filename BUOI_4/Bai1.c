#include<stdio.h>

void Input(int a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Enter a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void Output(int a[], int n){
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int FindMin(int a[], int n){
    int i, min = a[0];
    for(i = 1; i < n; i++)
        if(min > a[i])
            min = a[i];
    return min;
}

int FindPossion(int a[], int n){
    int i, pos;
    int min = FindMin(a, n);
    for(i = 0; i < n; i++)
        if(min == a[i])
            return i + 1;
    return 0;
}

void Sort(int a[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int main(){
    int n, i, a[50];
    printf("Enter the number n: ");
    do {
        scanf("%d", &n);
        if(n < 2 || n > 50)
            printf("Enter the number n again: ");
    }while(n < 2 || n > 50);

    Input(a, n);

    printf("Min va vi tri: %d %d", FindMin(a, n), FindPossion(a, n));

    Sort(a, n);
    printf("\nMang sau khi sap xep: ");
    Output(a, n);

    return 0;
}