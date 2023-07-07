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

if (i == 0) {
	if (j == 0) {
		bord[0][0].next_cells.push_back(&bord[1][2]);
		bord[0][0].next_cells.push_back(&bord[2][1]);
	}
	else if (j == bord[i].size() - 1) {
		bord[0][j].next_cells.push_back(&bord[1][j - 2]);
		bord[0][j].next_cells.push_back(&bord[2][j - 1]);
	}
	else if (j == 1) {
		bord[0][1].next_cells.push_back(&bord[1][3]);
		bord[0][1].next_cells.push_back(&bord[2][0]);
		bord[0][1].next_cells.push_back(&bord[2][2]);
	}
	else if (j == bord[i].size() - 2) {
		bord[0][j].next_cells.push_back(&bord[1][j - 2]);
		bord[0][j].next_cells.push_back(&bord[2][j - 1]);
		bord[0][j].next_cells.push_back(&bord[2][j + 1]);
	}
	else {
		bord[i][j].next_cells.push_back(&bord[i + 1][j - 2]);
		bord[i][j].next_cells.push_back(&bord[i + 1][j + 2]);
		bord[i][j].next_cells.push_back(&bord[i + 2][j - 1]);
		bord[i][j].next_cells.push_back(&bord[i + 2][j + 1]);
	}
}
else if (j == 0) {
	if (i == bord.size() - 1) {
		bord[i][0].next_cells.push_back(&bord[i - 2][1]);
		bord[i][0].next_cells.push_back(&bord[i - 1][2]);
	}
	else if (i == 1) {
		bord[1][0].next_cells.push_back(&bord[0][2]);
		bord[1][0].next_cells.push_back(&bord[2][2]);
		bord[1][0].next_cells.push_back(&bord[3][1]);
	}
	else if (i == bord.size() - 2) {
		bord[i][0].next_cells.push_back(&bord[i - 2][1]);
		bord[i][0].next_cells.push_back(&bord[i - 1][2]);
		bord[i][0].next_cells.push_back(&bord[i + 1][2]);
	}
	else {
		bord[i][j].next_cells.push_back(&bord[i - 2][j + 1]);
		bord[i][j].next_cells.push_back(&bord[i - 1][j + 2]);
		bord[i][j].next_cells.push_back(&bord[i + 1][j + 2]);
		bord[i][j].next_cells.push_back(&bord[i + 2][j + 1]);
	}
}
else if (i == bord.size() - 1) {
	if (j == bord[i].size() - 1) {
		bord[i][j].next_cells.push_back(&bord[i - 2][j - 1]);
		bord[i][j].next_cells.push_back(&bord[i - 1][j - 2]);
	}
	else if (j == 1) {
		bord[i][1].next_cells.push_back(&bord[i - 2][0]);
		bord[i][1].next_cells.push_back(&bord[i - 2][2]);
		bord[i][1].next_cells.push_back(&bord[i - 1][3]);
	}
	else if (j == bord[i].size() - 2) {
		bord[i][j].next_cells.push_back(&bord[i - 2][j - 1]);
		bord[i][j].next_cells.push_back(&bord[i - 2][j + 1]);
		bord[i][j].next_cells.push_back(&bord[i - 1][j - 2]);
	}
	else {
		bord[i][j].next_cells.push_back(&bord[i - 1][j - 2]);
		bord[i][j].next_cells.push_back(&bord[i - 2][j - 1]);
		bord[i][j].next_cells.push_back(&bord[i - 2][j + 1]);
		bord[i][j].next_cells.push_back(&bord[i - 1][j + 2]);
	}
}
else if (j == bord[i].size() - 1) {
	if (i == 1) {
		bord[1][j].next_cells.push_back(&bord[0][j - 2]);
		bord[1][j].next_cells.push_back(&bord[2][j - 2]);
		bord[1][j].next_cells.push_back(&bord[3][j - 1]);
	}
	if (i == bord.size() - 2) {
		bord[i][j].next_cells.push_back(&bord[i - 2][j - 1]);
		bord[i][j].next_cells.push_back(&bord[i - 1][j - 2]);
		bord[i][j].next_cells.push_back(&bord[i + 1][j - 2]);
	}
	else {
		bord[i][j].next_cells.push_back(&bord[i - 2][j - 1]);
		bord[i][j].next_cells.push_back(&bord[i - 1][j - 2]);
		bord[i][j].next_cells.push_back(&bord[i + 1][j - 2]);
		bord[i][j].next_cells.push_back(&bord[i + 2][j - 1]);
	}
}

int main()
{
	std::vector<std::vector<cell>> bord{8, std::vector<cell>{8}};

	for (int i = 0; i < bord.size(); i++)
	{
		for (int j = 0; j < bord[i].size(); j++)
		{

		}
	}
}
