#include <stdio.h>

int main(void) {
  int month, day, year;

  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  // Don't worry about the `scanf()` below, you'll learn more about these later!
  scanf("%d /%d /%d", &month, &day, &year);

  // Validating user input
  if (month > 12 || month < 1) {
    printf("Please enter a valid date.\nIncorrect month value added.\n");
  } 
  if (day > 31 || day < 1) {
    printf("Please enter a valid date.\nIncorrect day value added.\n");
    return 0;
  }

  // Print the month
  switch(month) {
    case 1:
      printf("January ");
      break;
    case 2:
      printf("February ");
      break;
    case 3:
      printf("March ");
      break;
    case 4:
      printf("April ");
      break;
    case 5:
      printf("May ");
      break;
    case 6:
      printf("June ");
      break;
    case 7:
      printf("July ");
      break;
    case 8:
      printf("August ");
      break;
    case 9:
      printf("September ");
      break;
    case 10:
      printf("October ");
      break;
    case 11:
      printf("November ");
      break;
    case 12:
      printf("December ");
      break;
    default:
      return 0;
  }

  // Print the day
  // Print the suffix for a given day
  switch(day) {
    case 1:
    case 21:
    case 31:
      printf("%dst, ", day);
      break;
    case 2:
    case 22:
      printf("%dnd, ", day);
      break;
    case 3:
    case 23:
      printf("%drd, ", day);
      break;
    default:
      printf("%dth, ", day);
  }

  // Print the year
  printf("%d\n", year);
  
  return 0;
}
