#include <stdio.h>  //พีระมิด 2 โปรแกรมนี้ยังไม่ผ่าน

int main()
{
int i,o;
scanf("%d",&i);
o=i;
for (int p = 1; p <= i; p++) {


for (int c = o; c > 0; c--) {  //เว้นวรรค
  printf(" ");
}
o-=1; // ลดค่า o ลงทีละ 1 (เพื่อให้ช่องว่างในแถวถัดไปลดลง)


for (int c = 1; c <= p; c++){  //ปริ้น "*"
     printf("*");
  }
p++;
i++;


 printf("\n");
}


      return 0;
}
