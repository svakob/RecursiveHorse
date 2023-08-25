#include "pch.h"

class Cell {

public:
	std::vector<Cell*> next_cells;
	std::pair<int,int> cordenats;
	int priority = 8;
	bool was_be = false;
	Cell()
	{
		
	}
};

void Update(Cell& cell){
	for (auto& i : cell.next_cells) {
		if (i->was_be) {
			i->priority = 9;
		}
		else
		{
			i->priority = 8;
			i->priority -= std::count_if(i->next_cells.begin(), i->next_cells.end(), [](Cell* cell) {return !(*cell).was_be; });
		}
	}
}

void Print(std::vector<std::vector<Cell>> & bord) {
	for (int i = 0; i < bord.size(); ++i)
	{
		for (int j = 0; j < bord[i].size(); j++) {
			if (bord[i][j].priority == 9) {
				std::cout << "x" << " ";
			}
			else
			{
				std::cout << bord[i][j].priority << " ";
			}
		}
		std::cout << '\n';
	}
}

bool hors(Cell& cell, int it, int size) {
	cell.was_be = true;
	Update(cell);
	if (it == size) {
		return true;
	}
	Cell* last_cell;
	int it0 = 0;
	std::list<Cell*> queue;
	for (int last_priority = 8; last_priority >= 0; last_priority--) {
		for (auto i : cell.next_cells) {
			if (i->priority == last_priority)
			{
				queue.push_back(i);
			}
		}
	}
	while (true) {
		if (it0 == queue.size()) {
			cell.was_be = false;
			return false;
		}
		if (hors(*queue.front(), it + 1, size)) {
			return true;
		}
		else
		{
			it0 += 1;
			continue;
		}
	}
}

int main()
{
	std::list<std::pair<int, int>> points;

	const int height = 8;
	const int width = 8;
	std::vector<std::vector<Cell>> bord(height, std::vector<Cell>(width));
	for (int i = 0; i < bord.size(); ++i)
	{
		for (int j = 0; j < bord[i].size(); j++)
		{
			bord[i][j].cordenats = std::pair<int, int>(i, j);
			int _i = i, _j = j;
			_i -= 2, _j += 1;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
				bord[i][j].priority -= 1;
			}
			_i += 1, _j += 1;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
				bord[i][j].priority -= 1;
			}
			_i += 2, _j += 0;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
				bord[i][j].priority -= 1;
			}
			_i += 1, _j -= 1;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
				bord[i][j].priority -= 1;
			}
			_i += 0, _j -= 2;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
				bord[i][j].priority -= 1;
			}
			_i -= 1, _j -= 1;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
				bord[i][j].priority -= 1;
			}
			_i -= 2, _j += 0;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
				bord[i][j].priority -= 1;
			}
			_i -= 1, _j += 1;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
				bord[i][j].priority -= 1;
			}
		}
	}
	Print(bord);
	hors(bord[1][0], 0, height * width-1);
}
