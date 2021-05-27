#include <stdio.h>
#include <stdlib.h> 

extern char **environ;
int main(int argc, char *argv[])
{
  char **p;
  int N = 0;
  int x = atoi(argv[1]);
  for (p = environ; *p != NULL && N < x; p++) {
    printf("%s\n", *p); 
    N++;
  }
}
