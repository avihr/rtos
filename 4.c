#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	int pid,i=0,cnt=0,len=0,j=0;
	char *inp=argv[1];
	pid=fork();
	if (pid==0)
	{

		printf("Inside child process\n");
		len=strlen(inp);

		for (int i = 0; i < len;i++)
		{
			if (inp[i]=='a' || inp[i]=='e' || inp[i]=='i' ||inp[i]=='o' ||inp[i]=='u' ||inp[i]=='A' ||inp[i]=='E' ||inp[i]=='I' ||inp[i]=='O' ||inp[i]=='U')
			{
				cnt++;
			}
		}
		
			printf("Number of vowels in is %d\n",cnt);
	}
	wait();
	return 0;
}