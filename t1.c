#include<stdio.h>

int main(void){
	int i,j,num=1;
	int darray [6][7] = {0};
	
		for(i=0;i<6;i++){
			for(j=0;j<7;j++){
				darray[i][j] = num;
	  			printf("%3d", darray[i][j]);
	  		    num +=2;

			}
			printf("\n");
		} //end for
	printf("%3d", darray[1][1]);
	printf("%3d", darray[0][3]);
}
