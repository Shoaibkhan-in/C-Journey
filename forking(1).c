#include <stdio.h>
#include <unistd.h>

int main() {
  pid_t child_pid = fork();

  if (child_pid == 0) {
    // This is the child process.
    printf("I am the child process.\n");
  } else {
    // This is the parent process.
    printf("I am the parent process.\n");
  }

  return 0;
}
