#include "../includes/ft.h"

char		*ft_filetostr(int fd)
{
	char *buf;

	buf = malloc(BUF_SIZE);
	read(fd, buf, BUF_SIZE);
	return (buf);
}