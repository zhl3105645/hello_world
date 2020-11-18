#include<stdio.h>
#include<string.h>
int main()
{
	char s[200];
	scanf("%s",s);
	int i;
	int n;
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
		}
		else if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	}
	printf("%s\n",s);
	return 0;
 } 
