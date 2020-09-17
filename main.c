
// Author: Marvin Jakobs mkj5388@psu.edu
// Collaborator: August Sanderson aes6218@psu.edu
// Collaborator: Anthony Cicardo abc6181@psu.edu
// Collaborator: Jian Weng jpw6087@psu.edu
// Section: 11
// Breakout: 2

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int sum_n(int n) {
  if(n <= 1){
    return n;
  }
  return n + sum_n(n-1); 
}

void print_n(const char *s, int n){
  if(n <= 0){
    return;
  }
  printf("%s\n",s);
  print_n(s,n-1);
}

int main(void) {
  char *a = readline("Enter an int: ");
  int num = (int) atof(a);
  printf("sum is %d.\n",sum_n(num));
  char *b = readline("Enter a string: ");
  print_n(b,num);
  return 0;
}