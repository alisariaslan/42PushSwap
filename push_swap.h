#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#ifndef ARGS
#define ARGS = 12 34 23 - 564
#endif

int count_check(int argc);
int character_check(int argc, char **argv);
int size_check(int argc, char **argv);

void writemy(char *s);
void stackwrite(int *a, int *b, int size, int count);
long long matoi(char *arg);
int *fill_stack(int argc, char **argv);
int *fill_empty(int argc);
int mrintf(char *str, ...);

#endif