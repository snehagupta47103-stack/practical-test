#include<stdio.h>

int main()
{
	int choice;
	float a, b;
	
	while(1){
		printf("---Calculator---");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		
		printf("Enter your choice");
		scanf("%d", &choice);
		
		printf("Enter two numbers");
		scanf("%f %f", &a, &b);
		
		switch(choice){
			case 1:
				printf("Result = %f\n", a + b);
				break;
			case 2:
				printf("Result = %f\n", a - b);
				break;
			case 3:
				printf("Result = %f\n", a * b);
				break;
			case 4:
				printf("Result = %f\n", a / b);
				break;
		}
	}
}
/*
output :-
---Calculator---1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice 1
Enter two numbers 2 6
Result = 8.000000
---Calculator---1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice 2
Enter two numbers 3 6
Result = -3.000000
---Calculator---1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice 3
Enter two numbers 4 9
Result = 36.000000
---Calculator---1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice 4
Enter two numbers 10 5
Result = 2.000000
*/
