#include <stdio.h>

int main(){
    int n;
	printf("nhap so :");
	scanf("%d", &n);
	
	if(n%2 == 0){
		printf("%d la so chan ");	
	} else {
		printf("%d la so le ");
	}
	return 0;
}
