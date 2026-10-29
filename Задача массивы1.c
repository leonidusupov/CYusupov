#include <stdio.h>
#define MAXN 100

int main() {
	int N;
	scanf("%d", &N);
	int arr[MAXN];
	for (int i = 0; i < N; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < N; i = i + 1) {
		if (arr[i] % 2 == 0){
			printf("%d ", arr[i]);
		}   
	}
	for (int i = 0; i < N; i = i + 1) {
		if (arr[i] % 2 != 0){
			printf("%d ", arr[i]);
		}   
	}
	printf("\n");
	return 0;
}
