#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  int numb = 0;
  char **p;
  for (p = environ; *p != NULL; p++) /* перебор всех элементов массива */
    numb = numb + 1;
  for(int j = 0; j < argc; j++)
    numb = numb + 1;
  printf("Number of variables : %d", numb);
}
