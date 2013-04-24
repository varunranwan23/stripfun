#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * strip(char *s, char ch)
{
	int i=0,n=strlen(s);
	char *s2=(char*)malloc(n+1);
	strcpy(s2,s);
	while(s2[i]==ch)
		i++;
	s2=&s2[i];
	n=strlen(s2);
	i=n-1;
	while(s2[i]==ch)
		i--;
	s2[i+1]='\0';
	return s2;
}

int main()
{
	char original[100]={0};
	char *modified;
	printf("Enter the string :");
	scanf("%[^\n]s", original);
	printf("%s\n",strip(original,'0'));
	return 0;
}
