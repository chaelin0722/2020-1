### Algorith 0722

<hr>
### 동적 프로그래밍 (Dynamic programming)

DP 는 큰 문제의 해답에 작은 문제의 해답이 포함되어 있고, 이를 재귀호출 알고리즘으로 구현하면 지나친 중복이 발생하는 경우에 이 재귀적 중복을 해결하는 방법을 뜻한다. 

동적프로그래밍의 핵심!

- 부분결과를 저장해나가면서 해를 구해나가는 것


.cpp 제출해야함... 그것도 첨부해서 commit 하자



#### Memoization(메모하기) 기법!

중복된 재귀호출을 피하는 방법이다.

~~~c
{
 	if(f[n] != 0) return f[n];
    else{
        if(n=1 || n=2)	f[n] = 1;  // f[n]값이 0 이면 fib(n)가 한번도 수행되지 않음을 의미
        else{
			f[n] = fib(n-1)+fib(n-2);
        }
        return f[n];
        
    }
}
~~~



#### DP 의 예제

- 문제 예 1 : 행렬 경로 문제

  오른쪽, 아래쪽으로만 이동 가능하다. 위 왼, 대각선 이동은 허용하지 않음. 

~~~c
matrixPath(n){
    /* (n,n) 에 이르는 최고 점수 */
	for(i=0;i<=n;i++)	c[i,0] = 0;
	for(j=1;j<=n;j++)	c[0,j] = 0;
    for(j=1;j<=n;j++){
		for(j=1;j<=n;j++)	c[i,j] = mji + max(c[i-1,j],c[i,j-1]);
    }
    return c[n,n];
}
~~~

> 복잡도 : O(n^2)



- 문제 예 2 : 돌 놓기 문제

  3 x N 테이블의 각 칸에 음또는 양의 정수가 기록되어 있음

  돌은 가로나 세로로 인접한 두칸에 동시에 놓을 수 없다.

  각 열에는 적어도 하나 이상의 돌을 놓는다. 

~~~c
pebble(n)
{
	for(p=1;p<=4;i++){
		peb[1,p] = w[1,p];		//무시
    }
    for(i=2;i<=n;i++){				// n 바퀴
		for(p=1;p<=4;p++){				// 4바퀴
			peb[i,p] = max{peb[i-1,q]} + w[i,p];  // 3가지
        }
    }
    return max{peb[n,p]};
}
/*
		n * 4 * 3 = O(n) actually theta n
*/
~~~

> 복잡도 : O(n)

