#include<stdio.h>
int main() {
  char str[50]="Welcome!", *pt;
  int i = 0;
  pt = str;
  while (*pt != '\0') {
    i++;
    pt++;
  }
  printf("The length of the given string 'Welcome!' is %d", i);

  return 0;
}
