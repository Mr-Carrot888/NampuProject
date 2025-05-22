#include <stdio.h> //อันนี้คิดนานมาก
int main (){
int i,p,count;
  scanf("%d",&i);

 for (p = 1; p <= i; p++) {
 for (count = 0;count < p;count++){
 printf("*");
 }
 printf("\n");
}


return 0;
}
