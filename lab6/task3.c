#include <stdio.h>

extern char **environ;
int main(int argc, char *argv[])
{
  int  numb = 0;
  char **p;
  for (p = environ; *p != NULL; p++){ /* перебор всех элементов массива */
    printf("%s\n", *p);
    numb = numb + 1;
    if (numb >= 10)
      break;
}}
