#include<stdio.h>

int main(){
	int f0, f1 = 1, fn = 1;
	int n;
	scanf("%d", &n);
	
	while(f1 < n){
		printf("%d ", f1);
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
	}
	return 0;
}
