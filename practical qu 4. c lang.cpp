#include<stdio.h>

void CubeArray(int *p, int size){
		for(int i = 0; i < size; i++){
			p[i] = p[i] * p[i] * p[i];
		}
}
int main(){
	int n;
	
	printf("enter size of array");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("enter elements of array");
	for(int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
		
	CubeArray(arr, n);
	
	printf("cubes of all elements\n");
	for(int i = 0; i < n; i++)
		printf("%d\n", arr[i]);
}
/*
output :-
enter size of array 3
enter elements of array 1 2 3
cubes of all elements
1
8
27
*/
	
