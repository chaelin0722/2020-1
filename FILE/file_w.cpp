#include<stdio.h>
#include<stdlib.h>

// 두번째 실행해도 파일 사이즈와 내용은 똑같을 것!  -> w,
//만약 이어붙이는 a 를 쓰면 파일 사이즈도 커지고 내용도 길어진다. 
// 파일 생성과 실행

int main(void) {
	char ch;
	FILE *fp;
	fp = fopen("chaelin.txt","w");
	if(!fp){
		printf("chaelin.txt cannot be written!\n");
		exit(0);
	} 
	for(ch='A'; ch<='Z';ch++){
		fputc(ch, fp);
	}
	fclose(fp);
	return 0;
}
