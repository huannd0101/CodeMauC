#include<stdio.h>

void Input(float a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("Nhap a[%d] = ", i);
        scanf("%f", &a[i]);
    }
}

void Output(float a[], int n){
    int i;
    for(i=0; i<n; i++)
        printf("%.2f ", a[i]);
}

float TBC(float a[], int n){
    float s = 0;
    int count = 0, i;
    for(i=0; i<n; i++)
        if((int)a[i]%2==0){
            count++;
            s+=a[i];
        }
    if(count==0)
        return -1;
    else
        return s/count;
}

void Sort(float a[], int n){
    int i, j;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(a[i] > a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}
void ChangeArray(float a[], int n){
    int i;
    for(i=0; i<n; i++)
        if((int)a[i]%2!=0)
            a[i] = 1.23;
}

int main(){
    int n, i;
    float a[50];
    
    do {
        scanf("%d", &n);
    }while(n<3 || n >50);
    Input(a, n);
    //a
    printf("%.2f\n", TBC(a, n));
    //b
    Sort(a, n);
    Output(a, n);
    //c
    printf("\n");
    ChangeArray(a, n);
    Output(a, n);

    return 0;
}