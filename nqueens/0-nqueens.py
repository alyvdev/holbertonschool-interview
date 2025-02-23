#!/usr/bin/python3
"""
N queens puzzle
"""
import sys


def is_safe(board, row, col, N):
    """
    Check if it's safe to place a queen at board[row][col]
    """
    for i in range(col):
        if board[row][i] == 1:
            return False

    for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    for i, j in zip(range(row, N), range(col, -1, -1)):
        if board[i][j] == 1:
            return False

    return True


def solve_nqueens(N):
    """
    Solve N queens puzzle and return all solutions
    """
    def solve_util(board, col):
        if col >= N:
            solution = []
            for i in range(N):
                for j in range(N):
                    if board[i][j] == 1:
                        solution.append([i, j])
            solutions.append(solution)
            return

        for i in range(N):
            if is_safe(board, i, col, N):
                board[i][col] = 1
                solve_util(board, col + 1)
                board[i][col] = 0

    board = [[0 for x in range(N)] for y in range(N)]
    solutions = []
    solve_util(board, 0)
    return solutions


def main():
    """
    Main function to handle input and print solutions
    """
    if len(sys.argv) != 2:
        print("Usage: nqueens N")
        sys.exit(1)

    try:
        N = int(sys.argv[1])
    except ValueError:
        print("N must be a number")
        sys.exit(1)

    if N < 4:
        print("N must be at least 4")
        sys.exit(1)

    solutions = solve_nqueens(N)
    for solution in solutions:
        print(solution)


if __name__ == "__main__":
    main()
