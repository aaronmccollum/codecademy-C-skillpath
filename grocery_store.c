#include <stdio.h>

int main() {
  
    // The code I wrote for the project
    int appleQuantity = 23;
    float applePrice = 1.49;
    double appleReview = 82.5;
    int appleReviewDisplay = appleReview;
    const char appleLocation = 'F';

    // Put all your code above this and if you declare your variables using the given names and types there is no need to change any of the code below.
    printf("An apple costs: $%.2f \nThere are %d in inventory found in section: %c \nYour customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}