/* вывод сначало четные , потом нечетные элементы*/

#include <stdio.h>

int main (){
	int a[10];
	int n;
	scanf("%d", &n);
	for (int i = 0; i<n; i = i + 1){
		scanf("%d", &a[i]);
	}
	for (int i = 0; i<n; i = i + 1){
		if (a[i] % 2 == 0){
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	for (int i = 0; i<n; i = i + 1){
		if (a[i] % 2 != 0){
			printf("%d ", a[i]);
		}
	}
	printf("\n");
	return 0;
}


