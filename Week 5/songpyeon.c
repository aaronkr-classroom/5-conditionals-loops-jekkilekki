#include <stdio.h>

int main() {
    int riceCakes = 0;
    int totalRiceCakes = 0;
    int userInput;

    printf("Welcome to the Chuseok Rice Cake Collector Game!\n");
    
    // While loop to collect rice cakes until player has enough
    while (totalRiceCakes < 10) {
        printf("\nYou currently have %d rice cakes.\n", totalRiceCakes);
        printf("How many rice cakes would you like to collect this round? (1-5): ");
        scanf("%d", &riceCakes);

        // If player collects more than 5, they get a warning and continue
        if (riceCakes > 5) {
            printf("Oops! You can only collect up to 5 rice cakes per round. Let's try again.\n");
            continue; // Skips the rest of the loop and asks for a valid input
        }

        totalRiceCakes += riceCakes;

        // Do-while loop for confirming whether the player wants to continue
        do {
            printf("You have %d rice cakes. Do you want to continue collecting?\n", totalRiceCakes);
            printf("Enter 1 to continue or 0 to stop: ");
            scanf("%d", &userInput);
            if (userInput != 1 && userInput != 0) {
                printf("Invalid input. Please enter 1 or 0.\n");
            }
        } while (userInput != 1 && userInput != 0);

        if (userInput == 0) {
            printf("You decided to stop collecting rice cakes.\n");
            break; // Exits the loop if the player chooses to stop
        }
    }

    printf("\nGame over! You gathered %d rice cakes.\n", totalRiceCakes);

    if (totalRiceCakes >= 10) {
        printf("Congratulations, you’ve collected enough rice cakes for Chuseok!\n");
    } else {
        printf("Maybe next time! You didn’t gather enough rice cakes for Chuseok.\n");
    }

    return 0;
}
