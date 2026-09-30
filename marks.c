//Name  Nelly
//Reg no  CT100/G/30689/26

#include <stdio.h>

int main() {
	float attendance , marks;
	printf("Enter attendance percentage:\t");
	scanf("%f" , &attendance);
	
	printf("Enter average marks :\t");
	scanf("%f" ,&marks);
	
	if (attendance >=75&& marks >=40) {
		printf("Eligible\n");
		
	}
	else {
		printf("Not eligible \n");

	}
	
	return 0;
	
}