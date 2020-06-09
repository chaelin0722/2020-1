#include<stdio.h>

int main(void){
	
	int num;
	printf("enter num : ");
	scanf("%d", &num);
	
	double y;
	double num2 = (double)num;
	double result = 0.0;
	/*
	while(y - (num2/y) > 0.00001 ){
		y = (y+(num2/y) )/2;
		
	}
	*/
	
	for(y=1.0; y - (num2/y) <= 0.00001;){
			y = (y+(num2/y) )/2;
	}
	double result2 = 0.0;
	result2 = (y*y+num2)/(2.0*y);
	result = (y+(num2/y))/2.0;
 	printf("¹¹Áö = %.6f\n", y);
	printf("square root = %.6f\n", result);
	printf("square root = %.6f\n", result2);
		return 0;
}
