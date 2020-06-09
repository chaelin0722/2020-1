#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int cnt =0;

int bingo(char *arr);
void board( char *arr, int num, char player);
void user(char *arr, char player);
void computer(char *arr, char player);
void init_board();

int main(void){
	char array[9];
	char* arr = &array[0];
	for(int i=0;i<9;i++) array[i] = ' ';
	
	init_board();
	
	srand((long)time(NULL));
	int ran = rand() % 2; //0~1의 난수 생성

	while(cnt != 9){
		if(ran == 0){
			user(arr, 'O');
			if(bingo(arr) == 1) {
				printf("You Win!\n"); break;
			}else{
				computer(arr, 'X');
				if(bingo(arr) == 1) {
					printf("YOU LOST\n"); break;
				}
			}
		}else{
			computer(arr, 'O');
			if(bingo(arr) == 1) {
				printf("YOU lost\n"); break;
			}else{
				user(arr, 'X');
				if(bingo(arr) == 1) {
					printf("YOU win\n"); break;
				}	
			}	
		}//end else	
	} //end while
	printf("draw!\n");	
	printf("빠져나오는지 보자");
	return 0;
}

void init_board(){
	for(int i=0;i<2;i++){
		printf("   |   |  \n");
		printf("---+---+---\n");
	}
	printf("   |   |  \n");
}
void board( char* arr, int num, char player){
	
	arr[num] = player;
	printf("\n");
	printf(" %c | %c | %c\n",*arr, *(arr+1),*(arr+2));
	printf("---+---+---\n");
	printf(" %c | %c | %c\n",*(arr+3), *(arr+4),*(arr+5));
	printf("---+---+---\n");
	printf(" %c | %c | %c\n",*(arr+6), *(arr+7),*(arr+8));

	cnt++;
	printf("cnt = %d\n", cnt);	
}
void user(char* arr, char player){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num); 
	if(num>9 || num<1){
		printf("Wrong number!\n");
		user(arr, player);
	}else if(*(arr+(num-1 ))== ' '){
		board(arr, num-1, player);
	}else{
		printf("Wrong number!\n");
		user(arr,  player);
	}
}
void computer(char* arr,char player){
		int random = rand() % 9;  //0~8까지의 난수 생성해서 그 값이 없으면 게임판출력.. 이미 있다면 다시 재귀호출 
		if(*(arr+random) == ' '){
			board(arr, random, player);
		}else{
			computer(arr,  player);
		}
}

int bingo(char* arr){
//대각선 
	if( ((*arr != ' ' )&& (*arr == *(arr+4) && *arr == *(arr+8)))|| ((*(arr+2) !=' ' )&& (*(arr+2)==*(arr+4)&& *(arr+2)==*(arr+6))) ) return 1;
//가로과 세로줄 빙고
	else {
		for(int i= 0;i<=8; i+=3){
			if( *(arr+i)!=' ' && *(arr+i) == *(arr+1+i) && *(arr+i) == *(arr+2+i) ) return 1;
		}
		for(int i=0;i<3;i++){
			if( *(arr+i)!=' ' && *(arr+i) == *(arr+3+i) && *(arr+i) == *(arr+6+i)) return 1;
		}
	}
	if(cnt == 9) return 4;  //무승부인 경우  
	return 0;
}
