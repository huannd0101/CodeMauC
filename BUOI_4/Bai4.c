#include<stdio.h>
#include<math.h>

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
//a
int IsPrime(int n){
    int i;
    if(n < 2)
        return 0;
    for(i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return 1;
}

int FindMaxPrime(int a[], int n){
    int i, max = 0;
    for(i = 0; i < n; i++)
        if(IsPrime(a[i]) == 1){
            max = a[i];
            break;
        }
    if(max == 0)
        return -1;
    
    for(i = 0; i < n; i++)
        if(max < a[i] && IsPrime(a[i]) == 1)
            max = a[i];
    return max;
}
//b
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

void FindNumber(int a[], int n){
    Sort(a, n);
    if(a[0] == a[n - 1])
        printf("-1");
    else 
        printf("First max: %d\nSecond max: %d", a[n - 1], a[n - 2]);
}

int main(){
    int n, i, a[30];
    printf("Enter the number n: ");
    do {
        scanf("%d", &n);
        if(n < 3 || n > 30)
            printf("Enter the number n again: ");
    }while(n < 3 || n > 30);

    Input(a, n);
    //a
    int maxPrime = FindMaxPrime(a, n);
    if(maxPrime != -1)
        printf("Max so nguyen to: %d\n", maxPrime);
    else 
        printf("Khong co so nguyen to max\n");
    //b
    FindNumber(a, n);

    return 0;
}