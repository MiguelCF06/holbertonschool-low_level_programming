#include <stdio.h>
int main()
{
  int intType;
  float floatType;
  long long int longlongType;
  long int longType;
  char charType;

  printf("Size of char: %ld bytes\n", sizeof(char));
  printf("Size of int: %ld bytes\n", sizeof(int));
  printf("Size of long int: %ld bytes\n", sizeof(long long int));
  printf("Size of long long int: %ld bytes\n" , sizeof(long int));
  printf("Size of float: %ld byte\n", sizeof(float));
  return(0);

}
