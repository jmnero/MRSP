#include <iostream>
#include <cmath>
int main(void){
	int sum,x;
	int max_no=0;
	while(x >= 0){
		printf("\n Enter a number :  ");
		scanf("%d",&x);
		if(x>=0){
			sum=sum+x;// negative number is not added. 
			if(x > max_no){
				 max_no=x;
				}
		}
	}
	printf("Sum of the entered  numbers : %d ",sum);
	printf("\n Highest number : %d ",max_no);
	return 0;
}
