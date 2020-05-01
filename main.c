#include <stdio.h>

int main(int argc, char** argv)
{
	printf("The number of arguments are %d\n", argc);
	printf("The first argument that you enter is %s\n", argv[1]);
	
	char is_running = 0;
	
	if(argv[1] == 1)
	{
		is_running = 1;	//Set is_running to true
	}
	else
	{
		is_running = -1;
	}
	
	if(is_running)
	{
		printf("Hero is set to run!\n");
	}
	
	if(is_running == -1)
	{
		printf("Hero is waiting for your commands!\n);
	}
				
	return 0;
}
