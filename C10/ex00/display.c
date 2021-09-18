#include <unistd.h>
#include <fcntl.h>

int	ft_display(char *file)
{
	int	r;
	int	f;
	char	a;

	f = open(file, 0);
	if (f == -1)
		return (0);
	while((r = read(f, &a, 1)))
	{
		if (r == -1)
			return (0);
		write(1, &a, 1);
	}
	close(f);
	return (1);
}
int main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		if (!ft_display(argv[1]))
			write(2, "Cannot read file.\n", 16);
	}
	return (0);
}

