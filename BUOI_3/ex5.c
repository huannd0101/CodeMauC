#include<stdio.h>

int main(){
    int a, b, a2, b2;
	printf("Nhap a, b: ");
	scanf("%d%d", &a, &b);
	a2 = a, b2 = b;
	while(a != b){
		if(a > b)
			a -= b;
		else 
			b -= a;
	}
    if(b2 / a == 1)
        printf("%d", a2/a);
    else 
	    printf("%d/%d", a2/a, b2/a);
    return 0;
}