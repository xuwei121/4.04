#include <stdio.h>
#include <string.h>
int main()
{
	char str[]="2*2/4*1/1*2*3/2";
	int sum=str[0]-'0';
	for(int i=1;i<strlen(str);i=i++)
	{
		if(str[i]=='*')
		{
			int a=str[i+1]-'0';
		    sum=sum*a;
			i++;
		}
		else if(str[i]=='/')
		{
		    int b=str[i+1]-'0';
		    sum=sum/b;
			i++;
		}
	}
	printf("sum=%d\n",sum);
	return 0;
}
