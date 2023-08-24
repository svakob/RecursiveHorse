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

bool hors(Cell& cell, int it, std::list<std::pair<int, int>>& points, int size) {
	cell.was_be = true;
	if (it == size) {
		return true;
	}
	int i = 0;
	while (true)
	{
		for (; i < cell.next_cells.size(); ++i) {
			if (!cell.next_cells[i]->was_be)
			{
				break;
			}
		}
		if (i == cell.next_cells.size())
		{
			i = -1;
		}
		if (i != -1) {
			if (hors(*cell.next_cells[i], it + 1, points, size)) {
				points.push_front(cell.points[i]);
				return true;
			}
			else
			{
				++i;
				continue;
			}
		}
		else
		{
			cell.was_be = false;
			return false;
		}
	}
}

int main()
{
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
	/*for (int i = 0; i < bord.size(); ++i)
	{
		for (int j = 0; j < bord[i].size(); j++) {
			std::cout << bord[i][j].priority << " ";
		}
		std::cout << '\n';
	}*/
	std::list<std::pair<int, int>> points;
	hors(bord[0][0], 0, points, height * width-1);
	/*std::cout << points.size() << '\n';
	for (auto& i : points)
	{
		std::cout << i.first << ' ' << i.second << '\n';
	}*/
}
