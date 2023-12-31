#include <stdio.h>
void main() {
  int choice, rate;
  int choice1;
  printf("Enter the mood that you have now:\n");
  printf("1.Happy\n2.Sad\n3.Angry\n4.Calm\n");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    printf("Emoji for your mood is:-\n");
    printf("\U0001F600");
    break;
  case 2:
    printf("Emoji for your mood is:-\n");
    printf("\U0001F614");
    break;
  case 3:
    printf("Emoji for your mood is:-\n");
    printf("\U0001F621");
    break;
  case 4:
    printf("Emoji for your mood is:-\n");
    printf("\U0001F607");
    break;
  }
  printf("\nWould you like to know the rate my code??\n");
  printf("Enter 1 for Yes\nEnter 2 for No\n");
  scanf("%d", &choice1);
  if (choice1 == 1) {
    printf("Rate my code from 1 to 5:\n 5 for excellent\n 4 for good\n 3 for "
           "average\n 2 for bad\n 1 for worst\n");
    scanf("%d", &rate);
    printf("Thanks for your valuable feedback");
  } else {
    printf("Okay thank you for your time");
  }
}
