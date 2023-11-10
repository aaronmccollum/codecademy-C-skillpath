# Program that practices the use of Switch statements in C. It prints out your weight on other planets based on the given 'weight' variable.

#include <stdio.h>

int main() {
  int weight = 190;
  int planetNumber = 10;
  int planetWeight;

  switch(planetNumber) {
    case 1:
      planetWeight = weight * 0.38;
      printf("You will weigh %d lbs if you fight on Mercury.\n", planetWeight);
      break;
    case 2:
      planetWeight = weight * 0.91;
      printf("You will weigh %d lbs if you fight on Venus.\n", planetWeight);
      break;
    case 3:
      planetWeight = weight * 0.38;
      printf("You will weigh %d lbs if you fight on Mars.\n", planetWeight);
      break;
    case 4:
      planetWeight = weight * 2.34;
      printf("You will weigh %d lbs if you fight on Jupiter.\n", planetWeight);
      break;
    case 5:
      planetWeight = weight * 1.06;
      printf("You will weigh %d lbs if you fight on Saturn.\n", planetWeight);
      break;
    case 6:
      planetWeight = weight * 0.92;
      printf("You will weigh %d lbs if you fight on Uranus.\n", planetWeight);
      break;
    case 7:
      planetWeight = weight * 1.19;
      printf("You will weigh %d lbs if you fight on Neptune.\n", planetWeight);
      break;
    default:
      printf("You are fighting in another universe!\n");
  }
}
