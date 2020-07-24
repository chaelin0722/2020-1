
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
char s1[1002], s2[1002];
int dp[1001][1001], i, j;
int main() {
	strcpy(s1, "10111010100");

	for (i = 1; s1[i]; i++)
		for (j = 1; s2[j]; j++)
			dp[i][j] = max({ dp[i][j - 1], dp[i - 1][j],
							 dp[i - 1][j - 1] + (s1[i] == s2[j])
				});
	printf("%d", dp[i - 1][j - 1]);
	return 0;
}
