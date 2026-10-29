/*
Разделить массив на две части, 
поместив в первую элементы, большие среднего арифметического массива, 
а во вторую — меньшие и равные среднему арифметическому.
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
	double sum = 0;
	for (int i = 0; i < N; i = i + 1) {
		sum = sum + arr[i];
	}
	double Srednee = sum / N;
	for (int i = 0; i < N; i = i + 1) {
		if (arr[i] > Srednee){
			printf("%d ", arr[i]);
		}
	}
	for (int i = 0; i < N; i = i + 1) {
		if (arr[i] <= Srednee){
			printf("%d ", arr[i]);
		}
	}
	
	return 0;
}
