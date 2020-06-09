//KIM CHAE LIN
#include <stdio.h>

int foo(int x, int y, int z){  //오름차순 정렬하기..  
	int num[3] = {x, y, z};
	int median, i,j,temp;
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			if(num[j] > num[j+1]){
				temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}	
		}
	}
	median = num[1];
	
	return median;
}

int main(void){
	int x, y, z;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d", &x, &y, &z);
	
	printf("Median = %d\n", foo(x, y, z));
	return 0;
}

