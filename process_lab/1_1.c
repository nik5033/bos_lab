#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int N = 0;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    N += 1;
  printf("Number of environment variables: %d\n", N);
}
