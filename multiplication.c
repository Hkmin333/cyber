#include<stdio.h>
int main(int argc, char *argv[])
{
	
	int n;
	int m;
	printf("Enter your number!\nwiche on do you want getting the multiplication: ");
	scanf("%d",&n);
	
	printf("Enter length ... ");
	scanf("%d",&m);
	
	
	printf("multiplication of %d:\n\n ",n);
	for(int i =1;i<=m;i++){
		printf("\n%d * %d = %d\n",n,i,n*i);
	}
	printf("\n\n***Thanks for yousing thise tool***\n***Stay with Us:: ***");
}
