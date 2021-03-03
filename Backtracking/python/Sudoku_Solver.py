# Title: Sudoku Solver
# Link: https://leetcode.com/problems/sudoku-solver/

from typing import List
from collections import defaultdict


class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        # Initialize rows ,columns,cells set as dictionary set
        row_sets, col_sets, cell_sets = defaultdict(set), defaultdict(
            set), defaultdict(set)
        
        # Retrieve col & num of cell choosen
        def get_cell_num(row, col):
            return (row // 3) * 3 + col // 3

        to_fill = [] 
        # add rows and columns in list to use it as a board 

        for r in range(9):
            for c in range(9):
                # When non empty cells 
                if board[r][c] != ".":
                    row_sets[r].add(board[r][c])
                    col_sets[c].add(board[r][c])
                    cell_sets[get_cell_num(r, c)].add(board[r][c])
                else:
                    # When cell is empty
                    to_fill.append((r, c))

        def dfs(idx, board):
            # Check that if we traverse through all the cells  
            if idx == len(to_fill):
                return True
            # Get row number,column number and cell number
            row, col = to_fill[idx]
            cell_num = get_cell_num(row, col)
            for ch in "123456789":
                if ch in row_sets[row] or ch in col_sets[
                        col] or ch in cell_sets[cell_num]:
                    continue
             
                # Add numbers in the box if we find all numbers of box correctly 
                board[row][col] = ch
                row_sets[row].add(ch)
                col_sets[col].add(ch)
                cell_sets[cell_num].add(ch)

                 # call backtrack function in recursion to continue to place numbers
                if dfs(idx + 1, board):
                    return True
                                
                # Remove numbers in the box if we find any number in box wrong 
                board[row][col] = '.'
                row_sets[row].remove(ch)
                col_sets[col].remove(ch)
                cell_sets[cell_num].remove(ch)

       #Start program at zero index and board input
        dfs(0, board)
        return board
