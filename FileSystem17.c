#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int argc, char *argv[])
{
    struct stat sobj;
    int fd = 0;
    if(argc != 2)
    {
        printf("Insufficient arguments\n");
        return -1;
    }
    fd = open(argv[1],O_RDONLY);
    fstat(fd,&sobj);

    printf("File name : %s\n",argv[1]);
    printf("File size is : %ld\n",sobj.st_size);
    printf("Number of links : %ld\n",sobj.st_nlink);
    printf("Inode number : %ld\n",sobj.st_ino);
    printf("File system number : %ld\n",sobj.st_dev);
    printf("Number of blocks : %ld\n",sobj.st_blocks);

    return 0;
}