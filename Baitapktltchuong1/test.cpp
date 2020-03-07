#include<string.h>
#include<iostream>
#include<stdio.h>
void Readln(char S[], int max);
int main()
{
	int a;
	char S[5];
	char A[10];
	scanf("%d",&a);
	Readln(S,5);
	Readln(A,10);
	printf("so %d%s--%s",a,S,A);
	return 0;
}
void  Readln(char S[], int max)
{
	if(fgets(S,max,stdin)!=NULL);
	if(fgets(S,max,stdin)!=NULL);
	//S[strlen(S)-1]='\0';
}
