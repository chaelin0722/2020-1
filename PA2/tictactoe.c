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
			user(arr, who, cnt, player); //�ٽ� �Է��ϵ���..  
		} 
	}
	return;
}

void computer(char arr[9], char who, int* cnt, _Bool  player){
	int ran = rand() % 9;  //0~8������ ���� �����ؼ� �� ���� ������ ���������.. �̹� �ִٸ� �ٽ� ���ȣ�� 
	if(arr[ran] == ' '){
		gameboard(arr, ran, who, cnt, player);	
			
	}else{
		computer(arr, who, cnt, player);
	}
	return;
}	

int bingo(char arr[9], int *n){
	int i;

	//�밢�� ���� 
	if((arr[0]!=' ' && arr[0] == arr[4] && arr[0] == arr[8]) || (arr[2]!=' '&& arr[2]==arr[4] && arr[2]==arr[6])) return 1;
	//�����ٰ� ������ ����
	for(i= 0;i<=8; i+=3){
		if(arr[0+i]!=' ' /*&& arr[1+i] != ' ' && arr[2+i] != ' '*/
			&& arr[0+i] == arr[1+i] && arr[0+i] == arr[2+i] ) return 2;
	}
	for(i=0;i<3;i++){
		if(arr[0+i] != ' '/* && arr[3+i] != ' ' && arr[6+i] != ' ' */
			&& arr[0+i] == arr[3+i] && arr[0+i] == arr[6+i]) return 3;
	}
	if(*n == 10) return 4;  //���º��� ���  
}

int main(void){
	int count;
	int* cnt = &count;
	count = 0;	//
	char arr[9];
	int i;
	for(i=0;i<9;i++){
		arr[i] = ' '; //������ �� �迭 �����ʱ�ȭ  
	}
	////////////////////////////*************888
	int ran;
	_Bool  player;
	
	srand((long)time(NULL));
	ran = rand() % 2; //0~1�� ���� ����
	printf("random = %d\n",ran);
	//�����ϴ� ���� O   

	gameboard(arr, 0, ' ', cnt, player);  //ù ���۽� �� ������ �����ֱ����� 
	while(*cnt<10){
		if(ran == 0) {   //player true���� �����,  false���� computer ��� ����.  
			player = 1; 
			user(arr, 'O', cnt, player);
		}else{
			player = 0;
			computer(arr, 'O', cnt, player);
			
		}
		
		//���� ����  
		
			
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
			printf("draw!!���ºζ��!\n");
		}
		*/
		
		if(result == 1){
			printf("�밢�� ����\n");
		}else if(result == 2){
			printf("���κ���\n");
		}else if(result == 3){
			printf("���κ���\n");
		}else{
			printf("���º�\n");
		}
	}//end while
	
	printf("Draw!\n");
	return 0;
}


