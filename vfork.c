#include<stdio.h>
#include<unistd.h>
int global;
int main()
{
	int local=2;
	if(vfork()==0)
	{
		/* child process */
		global=10;
		local=5;
		_exit(0);

	}
	printf("global %d ,local %d\n",global, local);
	return 0;
}
