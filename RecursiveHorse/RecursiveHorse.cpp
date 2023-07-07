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
			std::cout << " x";
		}
		std::cout << '\n';
	}
}

int main()
{
	std::vector<std::vector<cell>> bord{8, std::vector<cell>{8}};

	for (int i = 0; i < bord.size(); i++)
	{
		for (int j = 0; j < bord[i].size(); j++)
		{
			if (i == 0 && j == 0) {
				bord[0][0].next_cells.push_back(&bord[1][2]);
				bord[0][0].next_cells.push_back(&bord[2][1]);
			}
			else if (i == 0 && j == bord[i].size()-1) {
				bord[0][j].next_cells.push_back(&bord[1][bord[0].size() - 3]);
				bord[0][j].next_cells.push_back(&bord[2][bord[0].size() - 2]);
			}
			else if (i == bord.size() - 1 && j == 0) {
				bord[i][0].next_cells.push_back(&bord[bord.size() - 3][1]);
				bord[i][0].next_cells.push_back(&bord[bord.size() - 2][2]);
			}
			else if (i == bord.size() - 1 && j == bord[i].size() - 1) {
				bord[i][j].next_cells.push_back(&bord[bord.size() - 3][bord[0].size() - 2]);
				bord[i][j].next_cells.push_back(&bord[bord.size() - 2][bord[0].size() - 3]);
			}
		}
	}
}
