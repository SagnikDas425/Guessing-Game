/*PROJECT 1*/
/*A game to guess an alphabet either in capital letters.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int d,n,n1,c=1;
	char ch,ch1;
	srand(time(0));
	n = rand()%26;
	ch = (char)(n+65);
	d = (int)(ch);
do
	{
	printf("Enter a character: \n");
	scanf(" %c",&ch1);
	n1 = (int)(ch1);
	if(n1>d)
	{
		printf("Enter a Lower Alphabet Please! \n");
	}
	else if(n1<d)
	{
		printf("Enter a Higher Alphabet Please! \n");
	}
	else
	{
		printf("You guessed it correct in %d times",c);
	}
	c++;	
	}while(n1!=d);
	return 0;
}
