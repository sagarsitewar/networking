#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "fifo.h"
#include "readwrite.h"
int main()
{
	int readfd, writefd;
	mknod(FIFO_1, S_IFIFO | 0666, 0);
	mknod(FIFO_2, S_IFIFO | 0666, 0);
	readfd = open(FIFO_1, 0);
	writefd = open(FIFO_2, 1);
	
	server(readfd, writefd);
return 0;
}	
	 
