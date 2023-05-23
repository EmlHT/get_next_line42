#include "get_next_line.h"
#include <stdio.h>

int main(int ac, char **av) {
	int fd;
	char	*str;
	if (ac < 2)
		return (printf("error arg"));
	fd = open(av[1], O_RDONLY);
	str = get_next_line(fd);
	while (str)
	{
		printf(">\t%s", str);
		free(str);
		str = get_next_line(fd);
	}
}
