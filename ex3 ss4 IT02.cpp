#include <stdio.h>

int main() {
	int n;
	printf("nhap so :");
	scanf("%d", & n);
	
	if(n % 3 == 0 && n % 5 == 0){
		printf("%d chia het cho ca 3 va 5.\n", n);
	}else if(n%3==0){
		printf("%d chia het cho 3.\n", n);
	}else if(n%5==0){
		printf("%d chia het cho 5.\n", n);
	}else{
		printf("%d ko chia het cho ca 3 va 5", n);
	}
	
	return 0;
}
