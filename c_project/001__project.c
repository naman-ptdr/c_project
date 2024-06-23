/*
                             This Is Going To Be Fun ! GAME
This Game is played between two player . We will write a program that genrate a random number
 and asks the player's to guess it.
If the player's guess is higher than the actual number , then the program disply's
"Lower Number Please!" . Similarly if the player's guess is low ,
then the program prints "Higher Number Please!" .
When the player guess the correct number , the program displays the number of guess
the player used to arrive the currect number . And from both the player's whose number of
guess are less is Winner .
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int number, guess, nguess = 1, mguess = 1;
    // srand(time(0));
    // number = rand()%100 + 1;

    char first[10];
    char second[10];
    printf("\n\n\t\t\t\tThis Game Is Played Between Two Player \n\n");

    printf("Please Enter The Name Of First Player  :  ");
    scanf("%s", &first);
    printf("Please Enter The Name Of Second Player  :  ");
    scanf("%s", &second);

    printf("\n\n\t\t\t\t\t%s It's Your Turn\n\n", first);
    srand(time(0));
    number = rand() % 100 + 1;
    for (guess; guess != 0; nguess++)
    {
        printf("Guess The Number Between 1 & 100  :  ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please! \n");
        }
        else if (guess < number)
        {
            printf("Heigher Number Please! \n");
        }
        else
        {
            printf("\n %s You Guess It In %d Attempt \n", first, nguess);
            break;
        }
    }

    printf("\n\n\t\t\t\t\t%s It's Your Turn\n\n", second);
    srand(time(0));
    number = rand()%100 + 1;
    for (guess; guess != 0; mguess++)
    {
        printf("Guess The Number Between 1 & 100  :  ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please! \n");
        }
        else if (guess < number)
        {
            printf("Heigher Number Please! \n");
        }
        else
        {
            printf("\n %s You Guess It In %d Attempt \n", second, mguess);
            break;
        }
    }

    if (nguess > mguess)
    {
        printf("\n \n \t \t \t\t \t \t %s Is Winner\n \n \n ", second);
    }
    else if (nguess < mguess)
    {
        printf("\n \n \t \t \t\t \t \t   %s Is Winner\n \n \n ", first);
    }
    else
    {
        printf("\n \n \t \t \t\t \t \t  TIE \n \n \n ");
    }

    printf("\t\t\t\t\t*********THANK____YOU*********");
    return 0;
}

//     char first[10];
//     char second[10];
// printf("\n\n\t\t\t\tThis Game Is Played Between Two Player \n\n");

// printf("Please Enter The Name Of First Player  :  ");
// scanf("%s",&first);
// printf("Please Enter The Name Of Second Player  :  ");
// scanf("%s",&second);

// printf("\n\n\t\t\t\t\t%s It's Your Turn\n\n",first);
//  firstplayer(first);

//  printf("\n\n\t\t\t\t\t%s It's Your Turn\n\n",second);
//  secondplayer(second);

// result(first ,second);