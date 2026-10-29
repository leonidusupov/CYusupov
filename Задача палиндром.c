#include <stdio.h>
#define MAXN 100

int main() {
	int N;
	scanf("%d", &N);
	int arr[MAXN];
	for (int i = 0; i < N; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	int palindrome = 1;
	for (int i = 0; i < N / 2; i = i + 1) {
		if (arr[i] != arr[N - 1 - i]) {
			palindrome = 0;
			break;
		}
	}
	if (palindrome) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}
