#include "main.h"
#include <stdio.h>
//
int main(void)
{
	char *s0 = "Bob Dlan";
	char *s1 = "Robert Allen";
	printf("%s,%s\n", s0,s1);
	set_string(&s1, s0);
	printf("%s,%s\n", s0,s1);
	return (0);
}
