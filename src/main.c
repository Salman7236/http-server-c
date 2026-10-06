#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>

int main(void) {
	int fd = socket(AF_INET, SOCK_STREAM, 0);
	if (fd == -1) {
		perror("socket");
		return EXIT_FAILURE;
	}
	printf("The descriptor is %d\n", fd);
	return EXIT_SUCCESS;
}
