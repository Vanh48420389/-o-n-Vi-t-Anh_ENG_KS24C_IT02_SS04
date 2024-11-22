#include <stdio.h>

int main(){
	int year;
	printf("nhap nam :");
	scanf("%d", &year);
	
	if(year % 4 ==0){
		printf("%d la nam nhuan \n ", year);	
	} else {
		printf("%d ko phai nam nhuan ", year);
	}
	return 0; 
} 
