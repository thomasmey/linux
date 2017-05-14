#include <init.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <os.h>

int __init ufd_init(void)
{
	int fd, ret;

	printf("ufd_init:\n");
	fd = syscall(SYS_userfaultfd);
	if(fd == -1) {
		perror("ufd_failed");
		return -1;
	}

	// ret = ioctl(fd,
}

__uml_initcall(ufd_init);
