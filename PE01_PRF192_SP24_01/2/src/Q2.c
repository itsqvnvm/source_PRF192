#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double calculateS(int n);
//-----------------------------------------------------
double calculateS(int n) {
	double sum = 0;
	//Begin your codes here=====================
	int i;
	for(i=1;i<=n;i++){
		sum= sum + (i*1.0)/sqrt(i*i*i);
	}
//	while(n!=0){
//		tu=n;
//		mau=sqrt(n*n*n);
//		sum=sum+(tu*1.0)/mau;
//		n--;
//	}
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
	} while(n<=0);
	printf("\nOUTPUT:\n");
	sum = calculateS(n);
	printf("%.2lf",sum);
	printf("\n");
	system ("pause");
	return(0);	
}
//============================================================
