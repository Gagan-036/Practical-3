#include <stdio.h>

int main() {
  printf("Enter a number :\n");
  int num;
  scanf("%d", &num);
  char dummy[10];
  sprintf(dummy, "%d", num);
  int len = strlen(dummy);


int nam = (len / 2);

  for (int i = 0; i < nam; i++) {
    // printf(" here i %c\n", dummy[i]);
    // printf("other will be %c \n",dummy[len-1]);
    if(dummy[i] != dummy[len-1]){
      printf("Not a palindrome");
      break;
    }
  len--;
    if(i==nam-1){
      printf("PALINDROME SUCCESSFULL!!!");
    }
  }

  return 0;
}
