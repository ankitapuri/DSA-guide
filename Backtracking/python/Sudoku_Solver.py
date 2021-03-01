# Title: Sudoku Solver
# Link: https://leetcode.com/problems/sudoku-solver/

from typing import List
from collections import defaultdict
class Solution:
    def solveSudoku(self,board: List[List[int]])-> None:
        # check if the current number can be placed in the current row
        # col or cell
        def could_place(d, row, col):
            return not (d in rows[row] or d in columns[col] or d in boxes[box_index(row,col)])

        # place number d in (row,col) cell
        def place_number(d,row,col):
            rows[row][d] += 1
            columns[col][d] += 1
            boxes[box_index(row,col)][d] += 1
            board[row][col] = str(d)

        # remove number d in (row,col) cell
        def remove_number(d,row,col):
            del rows[row][d]
            del columns[col][d]
            del boxes[box_index(row,col)][d]
            board[row][col] = '.'

        # call backtrack function in recursion to continue to place numbers
        # till the moment we have a solution
        def place_next_numbers(row,col):
            # if we are in the last cell we have a solution
            if col == N - 1 and row == N -1:
                nonlocal sudoku_solved
                sudoku_solved = True
            # if not yet solved
            else:
                # if we are at the end of the row go to next row
                if col == N-1:
                    backtrack(row + 1,0)
                # go to next column
                else:
                    backtrack(row,col + 1)

        def backtrack(row = 0, col = 0):
            if board[row][col] == '.':
                # iterate over all numbers 1-9
                for d in range(1,10):
                    if could_place(d,row,col):
                        place_number(d,row,col)
                        place_next_numbers(row,col)
                        # if solved there is no need to backtrack
                        # since the single unique solution is is promised
                        if not sudoku_solved:
                            remove_number(d,row,col)
            else:
                place_next_numbers(row,col)
        # box size
        n = 3
        # row size
        N = n * n
        # function to compute box index
        box_index = lambda row,col: (row//n) * n  + col//n

        # initialize rows
        rows = [defaultdict(int)for i in range(N)]
        columns = [defaultdict(int) for i in range(N)]
        boxes = [defaultdict(int) for i in range(N)]
        print(rows)
        for i in range(N):
            for j in range(N):
                if board[i][j] != '.':
                    d = int(board[i][j])
                    place_number(d,i,j)
        sudoku_solved = False
        backtrack()
        print(rows)


if __name__ =="__main__":
    mySolution = Solution()
    board = [
        ["5","3",".",".","7",".",".",".","."],
        ["6",".",".","1","9","5",".",".","."],
        [".","9","8",".",".",".",".","6","."],
        ["8",".",".",".","6",".",".",".","3"],
        ["4",".",".","8",".","3",".",".","1"],
        ["7",".",".",".","2",".",".",".","6"],
        [".","6",".",".",".",".","2","8","."],
        [".",".",".","4","1","9",".",".","5"],
        [".",".",".",".","8",".",".","7","9"]]
    mySolution.solveSudoku(board)
    print(board)
