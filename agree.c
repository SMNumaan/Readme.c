#include <stdio.h>

int main()
{

char c;

{
  printf("do u agree: ");
  scanf("%c:\n" , &c);
}

    if (c == 'y' || c == 'Y' )
    {
      printf("agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
      printf("not agreed.\n");
    }

return 0;

}






