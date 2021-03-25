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

int CheckArray(int a[], int n){
    int i;
    for(i=0; i<n-1; i++)
        if(a[i]%2==0 && a[i+1]%2==0)
            return 1;
    return 0;
}

void SeparateTheArray(int a[], int n){
    int b[50], c[50], nb = 0, nc = 0, i;
    for(i=0; i<n; i++)
        if(a[i]==0)
            continue;
        else if(a[i]%2!=0)
            b[nb++] = a[i];
        else 
            c[nc++] = a[i];

    if(nb==0 || nc == 0)
        printf("-1");
    else {
        Output(b, nb);
        printf("- ");
        Output(c, nc);
    }
}

void Sort(int a[], int n){
    int i, j;
    for(i=0; i<n-1; i++)
        for(j=i+1; j<n; j++)
            if(a[i] < a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int main(){
    int n, i, a[50];
    //a
    do {
        scanf("%d", &n);
    }while(n<3 || n >50);
    Input(a, n);
    if(CheckArray(a, n) == 1)
        printf("YES");
    else
        printf("NO");
    //b
    printf("\n");
    SeparateTheArray(a, n);
    //c
    printf("\n");
    Sort(a, n);
    Output(a, n);

    return 0;
}