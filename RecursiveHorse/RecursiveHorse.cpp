#include "pch.h"

class cell {

public:
	std::vector<cell*> next_cells;
	cell()
	{

	}
};

void print(std::vector<std::vector<cell>> bord) {
	for (auto& i : bord)
	{
		for (auto& j : i)
		{
			std::cout << "x ";
		}
		std::cout << '\n';
	}
}

int main()
{
	const int height = 8;
	const int width = 8;
	std::vector<std::vector<cell>> bord{height, std::vector<cell>{width}};
	for (int i = 0; i < bord.size(); i++)
	{
		for (int j = 0; j < bord[i].size(); j++)
		{
			int _i = i, _j = j;
			_i -= 2, _j += 1;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
			}
			_i += 1, _j += 1;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
			}
			_i += 2, _j += 0;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
			}
			_i += 1, _j -= 1;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
			}
			_i += 0, _j -= 2;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
			}
			_i -= 1, _j -= 1;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
			}
			_i -= 2, _j += 0;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
			}
			_i -= 1, _j += 1;
			if (_i >= 0 && _i < height && _j >= 0 && _j < width) {
				bord[i][j].next_cells.push_back(&bord[_i][_j]);
			}
		}
	}
}
