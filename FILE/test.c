#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
	
	int i=0;
	int a=4, b=12;
	char ch, k[25];
	for(i=0;i<26;i++)	 k[i] = a+i;
	for(i=0;i<26;i++){
		if(*(k+i)!='T')		continue;
		break;
	}
	ch = (char)(i+b*2);
	printf("%d",ch);
	
/*	
	int a=2, b=12;
	int *p = &a, *q = &b;
	
	*p = *p - (*q<<4);
	*q = *p - *q;
	printf("%c", (char)b);

	/*
	int i, a=6 , b=4 , c=195;
	char *str = "C Programming";
	char s1[64] = {0}, ch = 'X';
	strcpy(s1, str+8);
	strcat(s1, str+4);
	printf("%s", s1);
	if( a!= b && s1[a] == s1[b] && s1[a+2] == 'a')
		ch = (char)((34 + s1[3]+ s1[4])-c);
	
	printf("%d",ch);
	return 0;
	*/
	/*
	int i, l, h,b=2;
	char *a;
	a="cccdd";
	char ch = 'X';
	for(l=0;*(a+l) !='\0'; l++);
	h = (l-1) >> 1;
	for(i=0;i<h;i++){
		if(*(a+i)== *(a+l-i-1))
			continue;
		break;
	}
	if(l>10 && a[3]==a[4] && i == h)	ch = 2020 - a[1] - b;
	printf("%d", ch);
	
	char *a="Wnnnmdns", *b="pvhylps";
	int c=20;
	int s = strlen(a), t = strlen(b);
	char *str = 0;
	char ch = 'X';
	
	str = (char*)malloc(s+2);
	*str = *a;
	for(t=1; t<s;t++){
		if(*(a+t) != *(b+t-1))
			*(str+t) = ((*(a+t)+ *(b+t-1))/2);
	}
	*(str+s) = *(b+s-1);
	*(str+s+1) = '\0';
	if(!strcmp(str, "Workshops"))	ch -= (char)c;
	
	printf("%d",ch);
	*/
	return 0;
}
