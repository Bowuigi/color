#include <stdio.h>
#include <string.h>

struct color {
	const char *colorname;
	const char *colorcode;
};

struct color colors[] = {
	/* Usual colors */
	{ .colorname="red",       .colorcode="31m"},
	{ .colorname="green",     .colorcode="32m"},
	{ .colorname="pink",      .colorcode="33m"},
	{ .colorname="blue",      .colorcode="34m"},
	{ .colorname="purple",    .colorcode="35m"},
	{ .colorname="cyan",      .colorcode="36m"},
	{ .colorname="white",     .colorcode="37m"},
	/* Attributes */
	{ .colorname="bold",      .colorcode="1m"},
	{ .colorname="dim",       .colorcode="2m"},
	{ .colorname="italic",    .colorcode="3m"},
	{ .colorname="underline", .colorcode="4m"},
	{ .colorname="blinking",  .colorcode="5m"},
	{ .colorname="reverse",   .colorcode="7m"},
	/* Special */
	{ .colorname="reset",     .colorcode="0m"},
	{ .colorname="normal",    .colorcode="0m"},
};

#define COLORS_LENGTH (sizeof colors / sizeof colors[0])

int main(int argc, char **argv) {
	if (argc!=2) {
		fprintf(stderr,"Usage: %s colorname\n",argv[0]);
		return 1;
	}

	int i=0;
	for (i=0; i<COLORS_LENGTH; i++) {
		if (strcmp(argv[1],colors[i].colorname)==0) {
			printf("\033[%s",colors[i].colorcode);
			return 0;
		}
	}
	fprintf(stderr,"%s : Color or attribute not found\n",argv[0]);
	return 1;
}
