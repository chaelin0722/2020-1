// 1614501 KIM CHAE LIN
#include<stdio.h>
int main(void){
	char ch[80] ={0};
	int amount=0;
	
	int i;
	printf("Enter message to be encrypted: ");
	
	scanf("%[^\n]s", ch);
	printf("Enter shift amount: ");
	scanf("%d", &amount);
	
	for(i=0;i<80;i++){
		if(ch[i] >=65 && ch[i]<=90 ){
			ch[i] = ((ch[i]-'A') +amount)%26 + 'A'; 
		}else if(ch[i] >=97 && ch[i]<=122){
			ch[i] = ((ch[i]-'a') +amount)%26 + 'a'; 
		} 
		
	} //end for

	printf("%s\n", ch);
	return 0;
}
