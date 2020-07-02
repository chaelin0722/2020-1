#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	FILE *src = 0, *dst = 0;
	char ch;
	if(argc!=3){
		exit(0);
	}
	if(!(src = fopen(argv[1], "r"))){   //존재하는 데이터 읽기! 그래야 그걸로 카ㅣ하니까  
		printf("%s dose not exist!\n", argv[1]);
		exit(0);
	}
	dst = fopen(argv[2], "w");
	while((ch=getc(src)) !=EOF){  //src 에 있는 것을 하나씩 가져와서 dst 에 put!! 한글자씩 copy.. 
			putc(ch, dst);
	}
	fclose(dst);
	fclose(src);
	
	return 0;
}
