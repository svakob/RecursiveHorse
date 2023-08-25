
# Horse Movement Puzzle Solver

This is a C++ program that solves a horse movement puzzle on an 8x8 board. The puzzle involves finding a sequence of moves for a horse piece on a chessboard such that it visits every square exactly once.

## How it works

The program uses a depth-first search algorithm to explore all possible moves of the horse piece. It starts from a given position on the board and recursively explores all possible next moves until it either finds a solution or exhausts all possibilities.

The `Cell` class represents a square on the board and stores information such as its coordinates, priority, and a list of neighboring cells. The `Update` function updates the priorities of the neighboring cells based on whether they have been visited or not.

The `Print` function displays the current state of the board, where cells with a priority of 9 are marked as 'x' and other cells display their priority value.

The `hors` function implements the depth-first search algorithm. It marks the current cell as visited, updates the priorities of neighboring cells, and recursively calls itself for each unvisited neighboring cell. If a solution is found, it returns true. Otherwise, it backtracks and tries the next unvisited neighboring cell.

## Usage

1. Compile the program using a C++ compiler.
2. Run the compiled executable.
3. The program will display the initial state of the board, marked as '8' for each cell.
4. After finding a solution, the program will display the final state of the board, marked as 'x' for each visited cell.

Feel free to modify the code to solve different variations of the horse movement puzzle or adapt it for other board sizes.

Happy puzzling!
