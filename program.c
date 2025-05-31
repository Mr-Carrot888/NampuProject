#include <stdio.h>  //พีระมิด 2

int main()
{
int i;
scanf("%d",&i);
for (int p = 1; p <= i; p++) {


for (int c = 1; c <= i - p; c++) {  //เว้นวรรค
  printf(" ");
}


for (int c = 1; c <= (2 * p - 1); c++){  //ปริ้น "*"
     printf("*");
  }


 printf("\n");
}


      return 0;
}
