#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>

int main(int argc, const char* argv[])
{
  int pid = 0;

  if(argc <= 1) 
     return 0;
  int n = atoi(argv[1]);
  if(n == 0) 
     return 0;

  for(int i = 0; i < n; i++) {
	pid = fork();
	if(pid == 0) 
           break;
 }

  if (pid == 0) {
        printf("Children pid: %d\n", getpid());
	sleep(2);
  } else if (pid > 0) {
	sleep(2);
  }

  return 0;
}
