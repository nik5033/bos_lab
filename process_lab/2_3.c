#include <stdio.h>
#include <unistd.h>

int main(void)
{
  int pid = 0;

  for(int i = 0; i < 10; i++) {
	pid = fork();
	if(pid == 0) 
           break;
 }

  if (pid == 0) {
	printf("Children pid: %d\n", getpid());
        printf("Parent pid: %d\n", getppid());

	sleep(2);
  } else if (pid > 0) {
    	printf("Parent process\n"
           	"id of process:  %d\n", pid);
	sleep(2);
  }

  return 0;
}
