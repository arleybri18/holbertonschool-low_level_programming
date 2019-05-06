#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
void main()
{
	int fd, write_fd;

	fd = open("102-result", O_WRONLY | O_APPEND);

	write_fd = write(fd, "906609", 6);
	close(fd);
}
