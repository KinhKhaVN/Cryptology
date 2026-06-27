#include <cstdio>
#include <cstring>
#include <iostream>



int main () {

  char buf[0x100];
  setvbuf(stdout, 0, 2, 0);
  puts("Terminal Server\n");
  while (1) {
    fgets(buf, 0x100, stdin);

    if (strcmp(buf, "exit\n") == 0)
      exit(0);

    printf(buf);
  }

  return 0;
}
