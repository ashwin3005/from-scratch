#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
	
	int fd;
	char buf[4];


	fd = open("../kilo.c", O_RDONLY);
	
	if(fd < 0){
		perror("open");
		return 1;
	}
	printf("fd value: %d\n", fd);
	int n;
	n = read(fd, buf, 4);
	write(1, buf, n);

	close(fd);


	return 0;
}
