#include<stdio.h>
int main(void){

	char alphabet;
	int count =0;
	int score =0;
	printf("Enter a word: ");

	while( (alphabet = getchar()) != '\n'){
		
		switch(alphabet){
			case 'a' : case 'A' : case 'e' : case 'E' : case 'I' : case 'i' : case 'l' : case 'L' :
			case 'N' : case 'n' : case 'O' : case 'o' :	case 'R' : case 'r' : case 'S' : case 's' :
			case 'T' : case 't' : case 'U' : case 'u' :
			score+=1; break;
			
			case 'd' : case 'D' : case 'G' : case 'g' :			
			score+=2; break;
			case 'B' : case 'b' : case 'C' : case 'c' :	case 'M' : case 'm' : case 'P' : case 'p' :
			score+=3; break;
			case 'F' : case 'f' : case 'H' : case 'h' :	case 'V' : case 'v' : case 'W' : case 'w' :
			case 'Y' : case 'y' :
			score+=4; break;
			
		 	case 'K' : case 'k' : score+=5; break;
		 	case 'J' : case 'j' : case 'X' : case 'x' : score+=8; break;
		 	case 'Q' : case 'q' : case 'Z' : case 'z' : score+=10; break;
		 	
		 	default : printf("Error!"); return 0;
		}
}

	printf("value = %d", score);
	return 0;
}

