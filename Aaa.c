/*сортирует массив по возрастанию*/

#include <stdio.h>
void print (int arr[], int n){
	for (int i = 0; i<n; i = i + 1){
		printf("%d ", arr[i]);
	}
}
void sort(int arr[], int n){
	for (int i = 0; i < n - 1; i = i + 1){
		for (int j = 0; j < n - 1 - i; j = j + 1){
			if (arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
}

int main (){
	int a[10];
	int n;
	scanf("%d", &n);
	for (int i = 0; i<n; i = i + 1){
		scanf("%d", &a[i]);
	}
	sort(a, n);
	print(a, n);
	return 0;
}


