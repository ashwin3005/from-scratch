#include <unistd.h>

int main() {
	char buf[20];
	int n;
	
	// syntax for read `size_t read(int fd, void *buffer, size_t count);`

	n = read(0, buf, 20); // read from stdin
	write(1, buf, n);    // write to stdout
	return 0;
}
