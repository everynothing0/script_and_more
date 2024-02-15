include <unistd.h>
/*
int	main(void) 
{
	char hex[] = {0*65, 0*20, 0*74, 0*27, 0*61, 0*69, 0*60, 0*65};
	write(1, hex, sizeof(hex));
	return (0);
} */

#include <unistd.h>

int main() {
	int i = 1;
	 char hex[] = {0x6A, 0x65, 0x20, 0x74, 0x27, 0x61, 0x69, 0x6D, 0x65};
	 while (i)
	 {
	 	write(1, hex, sizeof(hex)); 
	 	write(1, "\n", 1);
	 }
	 return (0);
}
										
