#include <stdio.h>
#include <memory.h>
main(int argc, char const *argv[])
{
	int *i = NULL;
	char s[50];
	memset(s, 0, 50);
	const char *p = ".png";
	sprintf(s, p);
	printf("s: %s\n", s);
	printf("s: %70n\n", s);
	printf("s: %70n\n", &i);
	printf ("i: %p\n", i);

	getchar();
	return 0;
}
