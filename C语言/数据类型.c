#include <stdio.h>
#include <limits.h>

int main()
{
  printf("int 存储大小 : %lu \n", sizeof(int));
  printf("float 存储最大字节数 : %lu \n", sizeof(float));
  printf("float 最小�?: %E\n", FLT_MIN);
  printf("float 最大�?: %E\n", FLT_MAX);
  printf("精度�?: %d\n", FLT_DIG);
  return 0;
}