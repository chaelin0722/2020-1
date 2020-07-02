#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char eval(char c);
void q1(int a);
void q2(int a, int b);

int main(void){
	int i=0, token[3] = {0};
	FILE *fp = fopen("answer.txt", "r");
	if(!fp){
		printf("Answer file load failed!\n");
		exit(0);
	}
	for(i=0;i<3;i++)	fscanf(fp, "%d", token+i);
	q1(token[0]);
	q2(token[1], token[2]);
	eval(0);
	fclose(fp);
	return 0;
}
void q1(int a){
	int k = a + '0';  //55를 만들어줘야함 '0' 은 48이므로 a 에는  7이 들어가야함  
	printf("%c", eval((char)k));  
	return;	
}
void q2(int a, int b){
	printf("%c", eval((char)(a+b)));  // 합이 57이(char 9 이므로) 되는 두개의 정수가 들어가야함 
}

char eval(char c){
	static int score = 0;
	static int count = 0;
	int pt[3] = {0,10,30};
	char ans[3] = {0};
	if(count ==2){
		printf("\n\nYour score: %d\n", pt[score]);
		if(score ==2){
			printf("Congratulations!\n");
		}
		return c;
	}
	
	strcpy(ans,"79");
	if(c == ans[count++])
		score++;
	return c;
	
}
