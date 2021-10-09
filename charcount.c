#include <stdio.h>

int main()
{
  int nc = 0;
  while (getchar() != EOF)
  {
    ++nc;
    printf("Character count is:%d\n", nc - 1);
  }

return 0;
}
