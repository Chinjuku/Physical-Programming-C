#include <stdio.h>
 
int main()
{
  int valueA;
  int valueB , valueC;
  int *ptrA = &valueA;
  int *ptrB = &valueB;
  int *ptrC = &valueC;
  
  scanf("%d %d %d", &valueA, &valueB, &valueC);

  // Swap
  int tmp = *ptrA; // สร้างตัวแปรชั่วคราวเพื่อเก็บค่า
  *ptrA = *ptrB; // แก้ไขค่าของ ptrA โดยใช้ Pointer ให้เป็นค่าของ ptrB
  *ptrB = *ptrC;
  *ptrC = tmp; // แก้ไขค่าของ ptrB โดยใช้ Pointer ให้เป็นค่าของ tmp

  printf("%d %d %d", *ptrA, *ptrB, *ptrC);
 
  return 0;
}