#include<stdio.h>
#include<time>

void init_gameboard(char arr[9]){
	int i;
	for(i=0;i<9;i++){
		arr[i] = ' ';
	}
}
void print_gameboard(char arr[9]){
	int i;
	printf(" %c | %c | %c\n",arr[0], arr[1],arr[2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n",arr[3], arr[4],arr[5]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n",arr[6], arr[7],arr[8]);
}
int get_player_move(int player, char arr[9]){
	int x;
	int done =0;
	k++;
	while(done != 1){
		printf()
	}
}

int main(void){
	char board[9];
	int quit=0;
	
	init_board(board);
	do{
		print_gameboard(board);
		quit = get_player_move(0,board);
		
	}while();
	
	return 0;
}

