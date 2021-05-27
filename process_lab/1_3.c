#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int N = 0;
  for (p = environ; *p != NULL && N < 10; p++) {
    printf("%s\n", *p); 
    N++;
  }
}
