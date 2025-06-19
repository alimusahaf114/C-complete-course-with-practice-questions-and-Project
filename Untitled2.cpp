#include <stdio.h>
int main(){
	
//	int a , b ;
//	printf("Enter value of a: ");
//	scanf("%d" , &a);
//	printf("Enter value of b: ");
//	scanf("%d" , &b);
//	
//		
//	if( a  > b){
//		
//		int c = a + b ;
//		printf("The sum of a + b = %d" , c );
//		
//	} else {
//			int c = a - b ;
//		printf("The subs of a - b = %d" , c );
//	}
//	

	int marks ;
	printf("Enter your marks : ");
	scanf("%d" , &marks);
	
	
	if(marks >= 80){
		printf("A1");
	} else if(marks >= 70){
		printf("B");
	} else if(marks >= 60){
		printf("C");
	} else {
		printf("You are Fail: ");
	}
	






}
