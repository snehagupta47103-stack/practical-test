#include<stdio.h>

int main(){
	int a = 11;
	int rows = 6;
	int columns = 6;
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < i; j++){
			printf("%d ", a);
			a += 1;
		}
		printf("\n");
	}
}
/*
output :-
11
12 13
14 15 16
17 18 19 20
21 22 23 24 25
*/
