/*
	동적 프로그래밍 방식으로 lCS 를 구현함  
*/
#include <iostream>
#include <string>
#include <cstring>
 
using namespace std;
 
int main() {
	
	/*변수 선언과 세팅 부분*/
    int LCS_length = 0;			//LCS 길이를 0으로 초기화한다.  	
	int max; 
	int **table; 				//LCS 가 이 테이블에 저장된다.  
 
    string str1, str2;

	// 비교할 두 수열  
    str1 = "10111010100";
    str2 = "00111010110";
 	// 문자열의 맨 앞에 0을 추가해 테이블의 첫번째 행과 열이 모두 0이 될수 있도록 한다. 
    str1 = "0" + str1;
    str2 = "0" + str2;
 
    /*테이블 세팅 부분 */
    // 각 문자열의 길이를 len1 , len2 에 각각 대입  
    int len1, len2;
    len1 = str1.length();
    len2 = str2.length();
 
 	/*  new 연산자는 해당 메모리를 사용해 객체를 만들고 할당된 메모리의 주소가 포함된
		 포인터를 반환한다.  할당된 메모리에 나중에 접근할 수 있도록 반환 값을 자체 포인터 변수(table)에 할당한다.  
	*/
	// 포인터 변수에 동적 메모리 할당 => 배열의 세로부분   
    table = new int*[len2];
    // len2의 크기 즉, 세로 크기만큼 반복하면서 배열의 가로 동적 메모리 할당 
    for (int i = 0; i < len2; i++) {
        table[i] = new int[len1];
    }
    
 	// 첫번째 가로줄을 0으로 초기화  
    for (int i = 0; i < len1; i++) {
        table[0][i] = 0;
    }
 
    /* LCS 의 길이 구하는 부분 
    이미지화 해서 보자면 아래와 같다.  
    예를 들어
	abcd 와 adbc의 경우
	  0 a b c d
	0 0 0 0 0 0					// 이 숫자를 max 라고 생각하자  
	a 0 1 1 1 1  
	d 0 1 1 1 2
	 ...
	이렇게 같은 문자가 나오면 +1 을 해주고 다를 경우 해당 부분의 왼쪽 값이나 위쪽값 중 더 큰 값을 넣는다. 
	 */
	 
    for (int i = 1; i < len2; i++) {  // 인덱스 0 부분은 모두 0이므로 1부터 FOR문을 진행한다 
        max = 0;						// max 0으로 초기화  
        table[i][0] = 0;
        for (int j = 1;j < len1; j++) {  
            if (str2[i]== str1[j]){  // 같은 문자가 나오면 이전까지의 LCS 길이에 +1을 한다. 
                max = table[i-1][j - 1] + 1;
                table[i][j] = max;
            }
            else {	/* 비교한 문자가 다를 경우 
					 비교한 문자가 포함되어 있는 직전 lcs값이 오게 된다.
					 표라고 생각하면 위쪽 값과 왼쪽 값 중 큰 값이 오게 된다 
					*/
                if(table[i][j - 1] > table[i - 1][j])   // 위쪽 값이 더 큰 경우  
                    table[i][j] = table[i][j-1];
                else
                    table[i][j] = table[i-1][j];		//왼쪽 값이 더 큰 경우 
            }
        }
        if (LCS_length < max)  // max값이 커질수록 LCS_length 즉 최종 lcs 길이를 갱신해준다. 
            LCS_length = max;
    }
    /*LCS 계산을 위해 변수 설정 */
    int temp0, temp1, for_j;
    temp1 = LCS_length;
    temp0 = temp1 - 1;
    for_j = len1 - 1;
    string LCS = "";
 
    /*LCS 계산하는 부분 */
    for (int i = for_j; i >0; i--) { /* 거꾸로 이중 for문을 진행한다. 
마지막 인덱스 값이 총 길이의 -1 한 값이므로 그것을 초기값으로 하고인덱스 1까지 진행한다. => 인덱스 0은 0 이므로 볼필요없음 
*/        for (int j = len1-1; j > 0; j--) { 
// 가장 큰 숫자가 시작 된 곳을 체크하고 그다음 큰 숫자를 체크해간다.  
            if (table[i][j] == temp1 && table[i][j - 1] == temp0 && table[i - 1][j - 1] == temp0 && table[i - 1][j] == temp0) {
             // lcs 길이와 같은 곳을 찾고 (즉, 가장 큰 값) 그 값의 왼쪽이 가장 큰 값보다 하나 작은 값이며 왼쪽의 위 값과 같으며 해당 값의 위쪽과 같을 때..
			 /*  즉, 아래와 같은 상황을 찾아 큰 값이 어딘지 체크 하는 것이다 
			 	  ...
			 	  1 2 3 3 3 3 
			 	  1 2 3 3 (4) 4
			 	  ...
			 	  여기서 가장 큰 값이 4 이며, (4) 의 왼쪽 값은 하나 작은 값이고 그 위의 값도 마찬가지로 3, 대각선왼쪽위의 값도 3이다.  
			 */ 
			 // 찾았다면 가장 큰 값을 나타내는 temp1과 temp1-1인 temp0에 -1를 해주고 그 다음 큰 값을 체크하러 간다. 
			    temp0--;
                temp1--;
            // 문자열  lcs 에 추가해준다.  
                LCS = str2[i] + LCS;
            // 다음 행의 그다음으로 큰 숫자가 나오는 위치를 알려주기 위해 j 를 아래와 같이 해준다.  
                for_j = j;
                break;
            }
        }
    }
 
    cout << LCS << endl;
    return 0;
}


//참고한 출처: https://twinw.tistory.com/126 [흰고래의꿈]
