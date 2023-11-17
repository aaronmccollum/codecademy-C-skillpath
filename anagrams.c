#include<stdio.h>
#include<string.h>

int main() {
  // counter arrays
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};

  // test strings
  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

  // calculating string lengths
  int s1Length = strlen(s1);
  int s2Length = strlen(s2);

  // flag for triggering result
  int flag = 0;

  // looping through s1
  for (int i = 0; i < s1Length; i++) {
    if (s1[i] == 'a') {
      counter1[0] += 1;
    } else if (s1[i] == 'b') {
      counter1[1] += 1;
    } else if (s1[i] == 'c') {
      counter1[2] += 1;
    } else if (s1[i] == ' ') {
      continue;
    } else {
      counter1[3] += 1;
    };
  };

  // looping through s2
  for (int i = 0; i < s2Length; i++) {
    if (s2[i] == 'a') {
      counter2[0] += 1;
    } else if (s2[i] == 'b') {
      counter2[1] += 1;
    } else if (s2[i] == 'c') {
      counter2[2] += 1;
    } else {
      counter2[3] += 1;
    };
  };

  // TESTING - loops to print out values of counter arrays 
  for (int i = 0; i < 4; i++) {
    printf("%d ", counter1[i]);
  }
  printf("\n");
  for (int i = 0; i < 4; i++) {
    printf("%d ", counter2[i]);
  }

  // looping through counter arrays and comparing counter values
  for (int i = 0; i < 4; i++) {
    if (counter1[i] != counter2[i]) {
      flag += 1;
    } else {
      continue;
    }
  };

  // determining result based off flag
  if (flag == 0) {
    printf("Anagram!\n");
  } else {
    printf("Not Anagram!\n");
  };
};
