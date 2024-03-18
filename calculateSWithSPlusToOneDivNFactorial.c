#include <stdio.h>
#include <stdlib.h>
double calculateS(int n);
//-----------------------------------------------------
double calculateS(int n) {
	double sum = 0;
	//Begin your codes here=====================
	for (int i = 0; i <= n; i++) {
		double factorial = 1;
		for (int j = 1; j <= i; j++) {
			factorial *= j;
		}
		sum += 1 / factorial;
	}
	//End your codes============================
	return sum;
}
//=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION============
int main() {	
	system("cls");
	printf("\nTEST Q2 (3 marks):\n");
	int n;
	double sum;
	do {
		printf("Enter n = ");
		scanf("%d",&n);
	} while(n<0);	
	printf("\nOUTPUT:\n");
	sum = calculateS(n);
	printf("%.2lf",sum);
	printf("\n");
	system ("pause");
	return(0);	
}
//============================================================
