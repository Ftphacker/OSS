#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  int  numb = 0;
  char **p;
  int max = 0;
  sscanf(argv[1], "%d", &max);
  for (p = environ; *p != NULL; p++){ /* перебор всех элементов массива */
    printf("%s\n", *p);
    numb = numb + 1;
    if (numb >= max)
      break;
}}
