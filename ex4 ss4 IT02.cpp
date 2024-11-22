#include <stdio.h>

int main(){
	int month;
	printf("nhap thang :");
	scanf("%d",& month);
	
	switch(month){
		case 4:
		case 6:
		case 9:
		case 11:
			printf("thang co 30 ngay \n", month);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("thang co 31 ngay \n", month);
			break;
		case 2:
			printf("thang co 28 hoac 29 ngay neu là nam nhuan \n", month);
			break;  
		default:
		    printf("thang ko hop le \n"); 
	}
	return 0; 
}
