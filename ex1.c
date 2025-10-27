
#include <stdio.h>

int main() {
    int guess;
    int secret_number = 3;

    printf("Guess the number between 1 and 5: ");
    scanf("%d", &guess);

    if (guess == secret_number) {
        printf("Congratulations! You guessed the right number.\n");
    } else {
        printf("Oops! That's incorrect. The secret number was %d.\n", secret_number);
    }

    return 0;
}
