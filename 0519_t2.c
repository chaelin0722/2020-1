//kim chae lin
#include<stdio.h>
//정수가 소수인지 판별하는 함수  
int prime(int num){
	int i;
	int count=0;
	
	for(i=2;i<num;i++){
		if( num%i ==0) count++; 
	}
	
	if(count==0) return 0;
	else return 1;
	
}
//출력함수  
void getSum(int num){

	int i,j, count=0;
	int numbers[num];
	int primes[num]; 
	
	//num 까지의 숫자가 소수인지 판별
	for(i=0;i<num;i++){
		numbers[i] = i+1;  //1부터 num 까지 넣는 배열 
		primes[i] = 0;  // 초기화 
	}
	for(i=0;i<num;i++){
		if(	prime(numbers[i]) ==0){
			primes[i] = numbers[i];
		}
	} 

	//출력 
	int p1=0;
	int p2=0;
	for(i=1;i<num;i++){ //인덱스 0에는 1이 있으므로 제외  
		for(j=i+1;j<num;j++){
			if(primes[i]+primes[j] == num){
				p1 = primes[i];
				p2 = primes[j];
			}
		}
	}
	if(p1 ==0 && p2 == 0) printf("nothing\n");
	else  printf("%d+%d\n", p1, p2);

		
}
int main(void){	
	int num=1;
		while(num<4 || num%2!=0){
			printf("Enter an even number greater than 2: ");
			scanf("%d", &num);
			
			if(num<=2) {
				printf("Not greater than 2!\n");
			}else if(num%2!=0) printf("Not even number!\n");
			
	}
		getSum(num);
	
}






