#include <stdio.h>

int main(){
	int n1,n2,n3; 
	printf(" nhap so thu nhat :", n1);
	scanf("%d", &n1);
	printf(" nhap so thu hai:", n2);
	scanf("%d", &n2);
	printf(" nhap so thu ba:", n3);
	scanf("%d", &n3);
	
	if(n1<n3 && n3<n2){
		printf("%d dung giua %d va %d ",n3,n1,n2);	
	} else {
		printf("%d ko dung giua %d va %d ",n3,n1,n2);
	}
	return 0; 
} 
