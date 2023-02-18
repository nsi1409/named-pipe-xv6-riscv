#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


char buf[512];

int
main(int argc, char *argv[])
{
	printf("here\n");
	int fd = open(argv[1], 0);
	printf("%d\n", fd);
	read(fd, buf, sizeof(buf));
	return 0;
}
