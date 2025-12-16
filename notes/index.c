#include <stdio.h>

int main()
{
  int age, registration;
  float height;
  char name[50];

  printf("Enter your age: \n");
  scanf("%d", &age);

  printf("Enter your height: \n");
  scanf("%f", &height);

  printf("Enter your name: \n");
  scanf("%s", name);

  printf("Enter your registration: \n");
  scanf("%d", &registration);

  printf("Your age is: %d\n", age);
  printf("Your height is: %.2fm\n", height);
  printf("Your name is: %s\n", name);
  printf("Your registration is: %d\n", registration);

  printf("End of the program.\n");

  return 0;
}