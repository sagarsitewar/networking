#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#define FIFO1 "avant"
#define PERMS 0666
int main()
{
	int fd;
	char buff[20];
	mknod(FIFO1,S_IFIFO | PERMS , 0);
	fd = open(FIFO1,O_RDWR);
	write(fd,"hi",3);
	read(fd, buff, sizeof(buff));
	printf("%s",buff);
	return 0;
}
