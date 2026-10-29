/*
Дан массив из N чисел. 
Необходимо написать программу, 
которая складывает два элемента массива, 
индексы которых поступают на вход.
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
	int k, m;
	scanf("%d %d", &k, &m);
	int sum = arr[k] + arr[m];
	printf("%d\n", sum);
	return 0;
}

