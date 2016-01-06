#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "fifo.h"
#include "readwrite.h"
int main()
{
	
	int readfd, writefd;
	readfd = open(FIFO_1, 1);
	writefd = open(FIFO_2, 0);
	
	client(readfd, writefd);
return 0;
}
