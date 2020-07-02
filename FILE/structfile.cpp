#include<stdio.h>
#include<stdlib.h>
struct name{
	char surname[16];
	char givenname[32];
}; 
struct phone{
	int first;
	int last;
};
struct info{
	struct name n;
	struct phone p;
};

int main(void){
	int i;
	struct info foo[3] ={{{"David","Park"}, {111,2222}}, {{"Jane","Kim"}, {333,4444}},
	{{"Sally","Lee"}, {111,2222}}}, bar[3];
	
	FILE *fp1 = 0, *fp2 = 0;
	
	fp1 = fopen("data.txt", "w");
	fwrite(foo, sizeof(struct info), 3, fp1);
	fclose(fp1);
	
	fp2 = fopen("data.txt","r");
	fread(bar, sizeof(struct info), 3, fp2);
	fclose(fp2);
	
	for(i=0;i<3;i++)	printf("%s %s: %d-%d\n", bar[i].n.surname, bar[i].n.givenname, bar[i].p.first, bar[i].p.last);  //4 3 2 1 이 10개 출력 즉, 4 3 2 1 4 3 2 1 4 3 
	printf("\n");
	return 0;	
	

}
