#include<stdio.h>
#include<time.h>
void user(char arr[9], char who, int* cnt, _Bool player);
void computer(char arr[9], char who, int* cnt, _Bool  player);
int bingo(char arr[9], int *n);

void gameboard(char arr[9], int num, char who, int* cnt, _Bool  player){
	arr[num] = who;
	++*cnt;
	printf("\n");
	printf(" %c | %c | %c\n",arr[0], arr[1],arr[2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n",arr[3], arr[4],arr[5]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n",arr[6], arr[7],arr[8]);
	//*************************//
	printf("cnt = %d\n", *cnt);
	
	if(!player){
		player = 1;
	}else{
		player = 0;
	}
}
 
void user(char arr[9], char who, int* cnt, _Bool  player){
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	if(a<1 || a>9) {
		printf("Wrong number!\n");
		user(arr,who, cnt, player);
	}else{
		if(arr[a-1] == ' '){
			gameboard(arr, a-1, who, cnt, player);
		} else {
			printf("Wrong number!\n");
			user(arr, who, cnt, player); //다시 입력하도록..  
		} 
	}
	return;
}

void computer(char arr[9], char who, int* cnt, _Bool  player){
	int ran = rand() % 9;  //0~8까지의 난수 생성해서 그 값이 없으면 게임판출력.. 이미 있다면 다시 재귀호출 
	if(arr[ran] == ' '){
		gameboard(arr, ran, who, cnt, player);	
			
	}else{
		computer(arr, who, cnt, player);
	}
	return;
}	

int bingo(char arr[9], int *n){
	int i;

	//대각선 빙고 
	if((arr[0]!=' ' && arr[0] == arr[4] && arr[0] == arr[8]) || (arr[2]!=' '&& arr[2]==arr[4] && arr[2]==arr[6])) return 1;
	//가로줄과 세로줄 빙고
	for(i= 0;i<=8; i+=3){
		if(arr[0+i]!=' ' /*&& arr[1+i] != ' ' && arr[2+i] != ' '*/
			&& arr[0+i] == arr[1+i] && arr[0+i] == arr[2+i] ) return 2;
	}
	for(i=0;i<3;i++){
		if(arr[0+i] != ' '/* && arr[3+i] != ' ' && arr[6+i] != ' ' */
			&& arr[0+i] == arr[3+i] && arr[0+i] == arr[6+i]) return 3;
	}
	if(*n == 10) return 4;  //무승부인 경우  
}

int main(void){
	int count;
	int* cnt = &count;
	count = 0;	//
	char arr[9];
	int i;
	for(i=0;i<9;i++){
		arr[i] = ' '; //게임판 각 배열 공백초기화  
	}
	////////////////////////////*************888
	int ran;
	_Bool  player;
	
	srand((long)time(NULL));
	ran = rand() % 2; //0~1의 난수 생성
	printf("random = %d\n",ran);
	//먼저하는 쪽이 O   

	gameboard(arr, 0, ' ', cnt, player);  //첫 시작시 빈 게임판 보여주기위해 
	while(*cnt<10){
		if(ran == 0) {   //player true값이 사용자,  false값이 computer 라고 하자.  
			player = 1; 
			user(arr, 'O', cnt, player);
		}else{
			player = 0;
			computer(arr, 'O', cnt, player);
			
		}
		
		//승패 여부  
		
			
		int result=0;
		result = bingo(arr, cnt);
		/*
		if(result == 3){
			if(player==0) {
				printf("You Win!\n");
				return 0;	
			}else{
				printf("You Lost...\n");
				return 0;
			}
		}else if(result == 1){
			printf("draw!!무승부라고!\n");
		}
		*/
		
		if(result == 1){
			printf("대각선 빙고\n");
		}else if(result == 2){
			printf("가로빙고\n");
		}else if(result == 3){
			printf("세로빙고\n");
		}else{
			printf("무승부\n");
		}
	}//end while
	
	printf("Draw!\n");
	return 0;
}


