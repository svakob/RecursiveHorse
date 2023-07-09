# Horse Traversal Algorithm

This program implements the horse traversal algorithm to find a path covering all cells of a given chessboard using knight moves. The program is written in C++.

## Algorithm Overview

The program uses a recursive function called `hors` to perform the horse traversal. The algorithm starts from a specified cell (0,0) on an 8x8 chessboard and attempts to visit all cells on the board.

The `Cell` class represents a cell on the chessboard and contains the following members:
- `next_cells`: A vector of pointers to the neighboring cells that can be reached from the current cell using knight moves.
- `points`: A vector of pairs representing the coordinates of the neighboring cells.
- `was_be`: A boolean flag indicating whether the cell has been visited.

The `hors` function recursively explores the neighboring cells of a given cell in a depth-first manner. It marks the current cell as visited and continues to the next unvisited cell until all cells have been visited. If a valid path is found, the coordinates of the cells are stored in a list called `points`.

## Program Execution

The main function initializes an 8x8 chessboard represented by a vector of vectors of `Cell` objects. It sets up the connections between neighboring cells by populating the `next_cells` and `points` vectors of each cell.

The program then calls the `hors` function to find a valid path covering all cells. If a path is found, the coordinates of the cells are printed to the console.

## Usage

To use this program, you need to compile and run it in a C++ compiler. After execution, the program will display the total number of transitions and the number of cells visited in the path. It will then print the coordinates of the visited cells.

Make sure to include the necessary headers and ensure that the C++ compiler supports the required features used in the program.

```cpp
#include "pch.h"

class Cell {
	// Cell class definition
};

bool hors(Cell& cell, int it, std::list<std::pair<int, int>>& points, int size) {
	// hors function definition
}

int main() {
	// Main function implementation
}
```

**Note:** The code provided here is just a snippet, and you need to provide the missing parts such as headers, function definitions, and any additional code required to compile and run the program successfully.
