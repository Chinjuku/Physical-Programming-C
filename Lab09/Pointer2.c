#include <stdio.h>
int main()
{
  int value = 200;
  int *ptrValue = &value;

  printf("%d", *ptrValue); // แก้ไขบรรทัดนี้ให้สามารถแสดงผลค่าของตัวแปร ptrValue
 
  return 0;
}