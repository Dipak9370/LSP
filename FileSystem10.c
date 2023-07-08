

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main(int argc, char *argv[])
{

	int fd =0;

	printf("Usage : ");
	if(argc != 2)
	{
		printf("Invalid number of arguments\n");
		return -1;
	}

	fd = creat(argv[1], 0777);
	if(fd == -1)
	{
		printf("Unable to created file\n");
	}
	else
	{
		printf("File created succesfully \n");
	}
	

	fd = open(argv[1], O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("Open file succesfully open with FD: %d\n", fd);
	}


	return 0;
}

