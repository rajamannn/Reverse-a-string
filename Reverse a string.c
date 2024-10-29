//Program to print the reverse a string without using a library function

#include<stdio.h>

void reverse(char *str)
{
  if(*str)
 {
  reverse(str+1);
   printf("%c", *str);
 }
}
int main()
{

  char a[] = "Aman Jha";
  reverse(a);

return 0;
}






