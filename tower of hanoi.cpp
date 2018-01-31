#include<stdio.h>
void towers(int, char, char, char);
int main()
{
	int num;
	printf("Lets play towet of hanoi \n");
	printf("Please tell me what you want to fix the size of disks: \n ");
	scanf("%d", &num);
	printf("Don't try to be oversmart by giveng more than 3 disks");
	printf("\n the sequence of moves involved in tower of Hanoi are : \n");
	towers(num, 'A', 'B', 'C');
	return 0;
	}
void towers(int num,char f,char m,char l)	{
		if(num == 1)
		{
			printf("move disk1  from peg %c to peg %c\n", f, m);
			return;}
		towers(num-1,f,l,m);
		printf("move disk %d form peg %c to peg %c\n", num, f, m);
		towers(num-1,l,m,f);	
	}
