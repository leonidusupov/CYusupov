/*
Напишите программу, выводящую на экран все элементы массива, которые меньше последнего.
*/

#include <stdio.h>
#define MAXN 100

int main() {
	int N;
	scanf("%d", &N);
	int arr[MAXN];
	for (int i = 0; i < N; i = i + 1) {
		scanf("%d", &arr[i]);
	}
	int found = 0;
	for (int i = 0; i < N; i = i + 1) {
		if (arr[i] < arr[N - 1]){
			found = found + 1;
			printf("%d ", arr[i]);
			
		}
	}
	if (found == 0){
		printf("0");
	}   
	return 0;
}
