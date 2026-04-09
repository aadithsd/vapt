#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{  
  char buf[5];
  strcpy(buf,argv[1]);
  printf("the string is: %s",buf);
  return 0;

}
