#include<stdio.h>

void Input(float a[], int n){
    int i;
    for(i = 0; i < n; i++){
        printf("Enter a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void Output(float a[], int n){
    int i;
    for(i = 0; i < n; i++)
        printf("%.2f ", a[i]);
}

float FindMin(float a[], int n){
    int i;
    float min = a[0];
    for(i = 1; i < n; i++)
        if(min > a[i])
            min = a[i];
    return min;
}
float FindMax(float a[], int n){
    int i;
    float max = a[0];
    for(i = 1; i < n; i++)
        if(max < a[i])
            max = a[i];
    return max;
}

void SwapMinAndMax(float a[], int n){
    int i, viTriMin, viTriMax;
    float tmp, min, max;
    min = FindMin(a, n);
    max = FindMax(a, n);
    for(i = 0; i < n; i++){
        if(a[i] == min)
            viTriMin = i;
        if(a[i] == max)
            viTriMax = i;
    }

    tmp = a[viTriMin];
    a[viTriMin] = a[viTriMax];
    a[viTriMax] = tmp;
}

int main(){
    int n, i;
    float a[50];
    printf("Enter the number n: ");
    do {
        scanf("%d", &n);
        if(n < 2 || n > 50)
            printf("Enter the number n again: ");
    }while(n < 2 || n > 50);

    Input(a, n);

    printf("Min va max: %.2f %.2f", FindMin(a, n), FindMax(a, n));

    printf("\nMang sau khi doi cho min va max: ");
    SwapMinAndMax(a, n);
    Output(a, n);

    return 0;
}