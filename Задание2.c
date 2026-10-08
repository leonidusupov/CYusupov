/* Разность максимального и минимального элемента*/

#include <stdio.h>

int main (){
	int a[10];
	int n;
	scanf("%d", &n);
	for (int i = 0; i<n; i = i + 1){
		scanf("%d", &a[i]);
	}
	int max = a[0];
	int min = a[0];
	for (int i = 1; i<n; i = i + 1){
		if (a[i]>max)
			max = a[i];
		if (a[i]<min)
			min = a[i];
		
	}
	int r = max - min;
	printf("%d", r);
	
	return 0;
}


