This is an implementation of tic-tac-toe written in C++, this README will go over how it works.

## How Tic-Tac-Toe Rules
For those who don't know, tic-tac-toe is a simple game that consists of two players. Each player is assigned with a symbol 'X' or 'O' and must take turns to get their symbol three consecutive
times in a row, column or diagonal fashion. The game is played on a 3 x 3 grid, due to number of spaces, it's possible to end the game in a tie.

## How it was coded:

# Number of players
You will first be prompted with how many players are going to play. While the game is designed for two players, if you're playing alone, player2 is coded to pick a space at random.
Player1 is assigned the 'X' symbol, while Player2 (human or not) is assigned the 'O' symbol.

# Making the grid
Since the game is played on a 3 x 3 grid, the grid was created as a char array allocated with 9 spaces. Each space was given a char number (1 - 9) to represent all 9 spaces available.
When run on the console, it should something like this:

1 | 2 | 3
_________
4 | 5 | 6
_________
7 | 8 | 9


# How the game functions
Under the hood, the whole game is played inside a while loop in the main function. Because the total amount of moves both players can make is 9, the loop is designed to break when
the totalMoves integer (assigned to 9) counts down to 0. 

Both player1 and player2 have their own functions to select which space they want. Both are coded to ensure that you can't pick a space that isn't a char number or to a space with a symbol on it. If done, so, the function will undergo recursion and prompt the player again to pick another space.

After each player makes their move, a boolean function is invoked, checkWinningConditions. This function contains boolean helper functions that check each row, column, and diagonal space to see if either player was gotten three of their symbols in the described patterns. If either of these boolean helper functions returns true, the while loop will break and determine the winner. 
    - Because the 3 x 3 grid is static, the helper functions (checkRows, checkDiagonals, checkColumns) are designed to check each specific index that give off these patterns. 

if the totalMoves counts down to 0, its determined to be a tie.