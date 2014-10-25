#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int abs(int x) { return x < 0 ? -x : x; }
int main()
{
	const char *str[2] = { "GaoXi", "XiaoMeng" };
	const int N = 10, M = 100;
	static char a[N][M];
	int len = max(strlen(str[0]), strlen(str[1]));
	memset(a, ' ', sizeof(a));
	int cnt = 0;
	for (int j = 0; j + len < M; j += 4)
		strcpy(&a[abs(cnt++%N - (N - 1))][j], str[cnt % 2]);
//	for (int j = 0; j < M; j++)
//		a[j % N][j] = 'A' + j % 26;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			printf("%c", a[i][j] ? a[i][j] : ' ');
		printf("\n");
	}
	return 0;
}
