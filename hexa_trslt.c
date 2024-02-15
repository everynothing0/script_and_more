#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_ascii_hex(const char *ascii_str)
{
	size_t len = ft_strlen(ascii_str);
	char *hex_str = malloc(len * 2 + len + 1); // del space just len * 2 + 1
	size_t i = 0;
	
	while (i < len) // convert each character ascii in pair character hexa
	{
		sprintf(hex_str + 3 * i, "%02X", (unsigned char)ascii_str[i]); // for delete space 2 instead of 3
		hex_str[3 * i + 2] = ' '; // comment if you desire without space
		++i;
	}	

	hex_str[len * 3 - 1] = '\0'; // same but if tou desire wth space just len * 3
	write(1, hex_str, len * 3 - 1); // but if u desire wth space just  len * 2

	free(hex_str);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		fprintf(stderr, "Use : %s <phrase>\n", av[0]);
		exit(EXIT_FAILURE);
	}

	ft_ascii_hex(av[1]);
	write(1, "\n", 1);
	return (0);
}
