/* находит первое и второе по величине число*/

#include <stdio.h>

int main (){
	int a[10];
	int n;
	scanf("%d", &n);
	for (int i = 0; i<n; i = i + 1){
		scanf("%d", &a[i]);
	}
	int max = a[0];
	int max2 = a[1];
	for (int i = 1; i<n; i = i + 1){
		if (a[i]> max){
			max2 = max;
			max = a[i];
			
		}
		else if (a[i]>max2 && a[i] < max){
			max2 = a[i];
		}
	}
	printf("%d %d", max , max2);
	return 0;
}


