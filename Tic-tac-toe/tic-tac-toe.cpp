#include <iostream>
using namespace std;


void showBoard();
int howManyPlayers();
void player1Move();
void player2Move();


// winning conditions:
bool checkWinningConditions();
bool checkDiagonals();
bool checkRows();
bool checkColumns();
bool checkAllSpaces();

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
bool isPlayer2Human {1};
string winner {"it's a tie"};

int main()
{
    int totalMoves{9};
    howManyPlayers();
    
    while(totalMoves > 0)
        {
            showBoard();
            player1Move();
            --totalMoves;
        if (checkWinningConditions() == 1 || totalMoves == 0) break;
            
            showBoard();
            player2Move();
            --totalMoves;
            if (checkWinningConditions() == 1 || totalMoves == 0) break;
        }
        cout << "The winner is: " << winner << endl;
        return 0;
}

void showBoard()
{
    system("cls");
    cout << "Player1 is X and Player2 is O" << endl;
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << " " << "___" << "___" << "___" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << " " << "___" << "___" << "___" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}


// If only one player is choosen, the boolean variable isPlayer2Human is set to false. This effects
// the player2Move function to select a random index
int howManyPlayers()
{
    int numOfPlayers {0};
    cout << "Select the number of human players: " << endl;
    cin >> numOfPlayers; 
    cout << endl;
    
    if (numOfPlayers > 2) 
    {
        cout << "Only one or two players" << endl;
        howManyPlayers();
    }
    
    if (numOfPlayers == 1) 
    {
        isPlayer2Human = 0;
    } else if (numOfPlayers == 2) 
    {
        isPlayer2Human = 1;
    }
    
    return numOfPlayers;
}


bool checkWinningConditions()
{
    if (checkDiagonals() == 0 && checkRows() == 0 && checkColumns() == 0)
    {
        return 0;
    } else {
        return 1;
    }
}

// Each of these helper functions checks each space through the board array's index.
bool checkDiagonals() 
{
    if (board[0] == 'X' && board[4] == 'X' && board[8] == 'X')
    {
        winner = "Player1"; 
        return 1;
    } else if (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') {
        winner = "Player2";
        return 1;
    }
    
    if (board[2] == 'X' && board[4] == 'X' && board[6] == 'X') 
    {
        winner = "Player1";
        return 1;
    } else if (board[2] == 'O' && board[4] == 'O' && board[6] == 'O') {
        winner = "Player2";
        return 1;
    }
    
    return 0;
}

bool checkRows()
{
    if (board[0] == board[1] && board[1] == board[2])
    {
        if (board[0] == 'X')
        {
            winner = "Player1";
            return 1;
        } else {
            winner = "Player2";
            return 1;
        }
    } else if (board[3] == board[4] && board[4] == board[5]) {
        if (board[3] == 'X')
        {
            winner = "Player1";
            return 1;
        } else {
            winner = "Player2";
            return 1;
        }
    } else if (board[6] == board[7] && board[7] == board[8]) {
        if (board[6] == 'X')
        {
            winner = "Player1";
            return 1;
        } else {
            winner = "Player2";
            return 1;
        }
    }
    
    return 0;
}

bool checkColumns()
{
    if (board[0] == board[3] && board[3] == board[6])
    {
        if (board[0] == 'X')
        {
            winner = "Player1";
            return 1;
        } else {
            winner = "Player2";
            return 1;
        }
    } else if (board[1] == board[4] && board[4] == board[7]) {
        if (board[1] == 'X')
        {
            winner = "Player1";
            return 1;
        } else {
            winner = "Player2";
            return 1;
        }
    } else if (board[2] == board[5] && board[5] == board[8]) {
        if (board[2] == 'X')
        {
            winner = "Player1";
            return 1;
        } else {
            winner = "Player2";
            return 1;
        }
    }
    return 0;
}

void player1Move()
{
    int player1Mark;
    cout << "Player1, select which space you want" << endl;
    cin >> player1Mark;
    player1Mark = player1Mark - 1;
    cout << endl;
    
    if (board[player1Mark] == 'X' || board[player1Mark] == 'O' || player1Mark < 0 || player1Mark > 8)
    {
        cout << "Please select a valid open space" << endl;
        player1Move();
    } else {
        board[player1Mark] = 'X';
        return;
    }
}

void player2Move()
{
    if (isPlayer2Human == 0)
    {
        int randomIdx = rand() % 8;
        if (board[randomIdx] == 'X' || board[randomIdx] == 'O')
        {
            return player2Move();
        } else {
            board[randomIdx] = 'O';
            return;
        }
    }
    
    int player2Mark;
    cout << "Player2, select which space you want" << endl;
    cin >> player2Mark;
    player2Mark = player2Mark - 1;
    cout << endl;
    
    if (board[player2Mark] == 'X' || board[player2Mark] == 'O'||  player2Mark < 0 || player2Mark > 8)
    {
        cout << "Please enter a valid open space" << endl;
        player2Move();
    } else {
        board[player2Mark] = 'O';
        return;
    }
}