/* main.c - MeowMeow, a stream encoder/decoder */

/* system includes */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>
#include <string.h>
#include <errno.h>
#include <getopt.h>

/* project includes */
#include "main.h"
#include "mmencode.h"
#include "mmdecode.h"

/* externs */
extern char *optarg;
extern int optopt;
extern int opterr;
extern int opterr;

/* defines */
#define OPTARG "i:o:hV"
#define MM_OP_INVALID 0
#define MM_OP_ENCODE 1
#define MM_OP_DECODE 2

int usage(char *, int);
int pick_operation(char *);

int main(int argc, char *argv[]) {
  /* 07 variable declarations */
  /* 08 check argv[0] to see how the program was invoked */
  /* 09 process the command line options from the user */
  /* 10 do the needful */
}

/* 11 ancillary functions if any */
