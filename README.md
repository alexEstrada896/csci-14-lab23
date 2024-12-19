Missing input validation on the player number (-1)

1. (10 pts) Write a complete program in C++ that stores the following data about a soccer player in a structure:

Player's Name
Player's Number
Points Scored by Player
Your program should keep an array of 4 of these structures. Each element is for a different player on a team. When the program runs it should prompt the user to enter the data for each player. It should then show a table (Formatted output) that lists each player's name, number, and points scored. Your program should also calculate and display the total points earned by the team. The number and name of the player who has scored the most points should also be displayed.

Your program must also implement input validation: Do not accept negative values for players' numbers or points scored.

Sample input and output:

Input:

Enter the name of player 1: Helena
Enter the number of player 1: -1
Invalid input. Please enter a non-negative number: 22
Enter the points scored by player 1: -10
Invalid input. Please enter a non-negative number: 4

Enter the name of player 2: Maile
Enter the number of player 2: 5
Enter the points scored by player 2: 8

Enter the name of player 3: Kayla
Enter the number of player 3: 3
Enter the points scored by player 3: 4

Enter the name of player 4: Brooklyn
Enter the number of player 4: 8
Enter the points scored by player 4: 1
Output:

Table:          Player 1     Player 2     Player 3     Player 4
Name:           Helena       Maile        Kayla        Brooklyn
Number:         22           5            3            8
Points Scored:  4            8            4            1

Total points earned: 17

Maile, number 5, scored the most points: 8
