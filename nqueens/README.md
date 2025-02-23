# N Queens

## Description
The N Queens puzzle is a classic chess problem that involves placing N chess queens on an N×N chessboard so that no two queens threaten each other. This means that no two queens can share the same row, column, or diagonal.

This project implements a solution to the N Queens problem using backtracking algorithm in Python.

## Requirements
- Python 3.4+
- The first argument must be the board size (integer N)
- If the argument count is wrong, print "Usage: nqueens N" and exit with status 1
- If N is not an integer, print "N must be a number" and exit with status 1
- If N is smaller than 4, print "N must be at least 4" and exit with status 1