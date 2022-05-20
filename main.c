#include "header.h"

const char* PREFIX = "($)";

/*
 * main - Shell entry point
 */
int main(int argc, char **argv)
{
	char args[256];
	printf("%d\n%s", argc, argv[0]);
input:
	printf("%s", PREFIX);
	scanf("%s", args);
	goto input;
}
