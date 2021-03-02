#include<bits/stdc++.h>
using namespace std;
// This is the solution for solving sudoku by passing a board to the funtion of solveSudoku int Solution class;
class Solution {
public:
    void solveSudoku(vector<vector<char> >& board) {
        solvable(board,0,0);    
    }
    bool solvable(vector<vector<char> >& board,int i,int j)
    {
        if(i==9)
        {
            return true;
        }
        if(j==9)
        {
            return solvable(board,i+1,0);
        }
        if(board[i][j]!='.')
        {
            return solvable(board,i,j+1);
        }
        for(int number=49;number<58;number++)
        {
            if(canplace(board,i,j,number))
            {
                board[i][j]=(char)number;
                
                if(solvable(board,i,j+1))
                {
                    return true;
                }
                
            }
        }
        
        //backtracking step
        board[i][j]='.';
        
        return false;
    }
    bool canplace(vector<vector<char> >& board,int i,int j,int number)
    {
        for(int x=0;x<9;x++)
        {
            if(number==board[x][j])
            {
                return false;
            }
        }
        for(int x=0;x<9;x++)
        {
            if(number==board[i][x])
            {
                return false;
            }
        }
        int sx=(i/3)*3;
        int sy=(j/3)*3;
        for(int p=sx;p<sx+3;p++)
        {
            for(int q=sy;q<sy+3;q++)
            {
                if(number==board[p][q])
                {
                    return false;
                }
            }
        }
        
        return true;  
    }
};
//let us test our code by passing a board of characters
int main()
{
	Solution s;
	vector<vector<char> > board={
	{'5','3','.','.','7','.','.','.','.'},
	{'6','.','.','1','9','5','.','.','.'},
	{'.','9','8','.','.','.','.','6','.'},
	{'8','.','.','.','6','.','.','.','3'},
	{'4','.','.','8','.','3','.','.','1'},
	{'7','.','.','.','2','.','.','.','6'},
	{'.','6','.','.','.','.','2','8','.'},
	{'.','.','.','4','1','9','.','.','5'},
	{'.','.','.','.','8','.','.','7','9'}
	};
	s.solveSudoku(board);
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
