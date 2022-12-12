#include "stdio.h"
#include "encrypt.h"
#include "checksum.h"

int main()
{
	char s[] = "skaji drug i prohodi";
	encrypt(s);
	printf("Zashiforvano v '%s'\n", s);
	printf("Kontrolnaya summa: %i\n", checksum(s));
	encrypt(s);
	printf("Rashifrovano obratno v: '%s'\n", s);
	printf("Kontrolnaya summa: %i\n", checksum (s));
	return 0;
}

