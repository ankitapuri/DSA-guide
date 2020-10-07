/*Given a 9*9 sudoku board, in which some entries are filled and others are 0 (0 indicates that the cell 
is empty), you need to find out whether the Sudoku puzzle can be solved or not i.e. return true 
or false.
Input - 9 Lines where ith line contains ith row elements separated by space  */
#include<iostream>
using namespace std;
//check if number appear in row
int rowcheck(int board[][9],int a,int b)
{
    //loop for checking from column 0 to colum 8 with row a being same
    //means you are checking if particular value b exist in same row or not
    for(int i=0;i<9;i++)
    {
        //if the value b already  exists in that row then return false
        if(board[a][i]==b)return false;
    }
    //if row has not that value then return true
    return true;
}
//check if number appear in column
int colcheck(int board[][9],int a,int b)
{
    //loop for checking from row0 to row8 with column a being same
    // means you are checking if a particular value b exist in same column or not
    for(int i=0;i<9;i++)
    {
        //if the value already exists in that column then return false
        if(board[i][a]==b)return false;
    }
    // if that column has not value b then return true
    return true;
}
//check if number appear in a cell
int cellcheck(int board[][9],int a,int b,int key)
{
    //check for  3x3 cell
    //loop for row a to row a+3 as cell is 3x3
    for(int i=a;i<a+3;i++)
    {
        //same loop  for column b to column b+3 as cell is 3x3
        for(int j=b;j<b+3;j++)
        //if value is preseent before then return false;
        if(board[i][j]==key)return false;
    }
    //if value does not exist in that cell then return true;
    return true;
}
//main backtracking function
bool solve(int board[][9],int i, int j)
{
    //check for last row and column
    if(i==8 && j==8)
    {
        //check if last cell that is sudoku[8][8] is blank 
        if(board[8][8]==0)
        {
            //put that value in it as value can be from 1 to 9 only thats why loop is from 1 to 9
            for(int t=1;t<=9;t++)
            {
                //for each value check if it already exost in its corresponding column, row and cell
                if(rowcheck(board,8,t) && colcheck(board,8,t) && cellcheck(board,6,6,t))
                //return true if it does not exist
                    return true;
            }
            //else return false
            return false;
        }
        // if last cell is not empty then return true
        else return true;
    }
    bool ans;
    //check for empty cell at given row and column  
    if(board[i][j]==0)
    {
        //put that value in it as value can be from 1 to 9 only thats why loop is from 1 to 9
        for(int t=1;t<=9;t++)
        {
            //take value t and check if it already exist in that row,column and cell
            if(rowcheck(board,i,t) && colcheck(board,j,t) && cellcheck(board,3*(i/3),3*(j/3),t))
            {
                //if it is true then assign it to that cell value
                board[i][j]=t;
                if(j<8)ans=solve(board,i,j+1); // if column is less than 8 then recusrive call for column and fill all values in it
                if(j==8)ans=solve(board,i+1,0);// if column is last then increase row by 1 and recursive call for row
            }
        }
        //if value at particular cell is empty then return false 
        if(board[i][j]==0)return false;
        //if answer returned is false then made particular value again zero
        if(ans==false)board[i][j]=0;
    }
    // if value at cell is not empty then just fill values in its corresponding rows and columns by recursive call
    else
    {
        if(j<8)ans=solve(board,i,j+1);
        if(j==8)ans=solve(board,i+1,0);
    }
    return ans;
}
//a function called by main which has only one parameter
bool sudokuSolver(int board[][9]){
  bool ans =solve(board,0,0);
    return ans;

}

int main(){

  int n = 9; 
  int board[9][9];
  //input of sudoku  0 means blank
  for(int i = 0; i < n ;i++){
	for(int j = 0; j < n; j++){
        	cin >> board[i][j];
        }		
  }
  if(sudokuSolver(board)){
	cout << "true";	
  }else{
	cout << "false";	
  }
}