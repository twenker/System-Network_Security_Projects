#include <stdio.h>
#include <stdlib.h>

int i, a[100];

main()
{  for (i=0; i < 99; i++)
   {
      read(0, &a[i], 1); // change the "1" to 4 in part B
      printf("%x\n", a[i]);
    };
}

