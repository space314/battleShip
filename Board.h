#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include<vector>
using std::vector;
#include<utility>
#include <random> 
#include <functional>
using std::pair;
using std::vector;
#include <memory>

class Game_Level
{
private:
	int * _game_Board;

public:
	static int Number_of_Tiles;

	//Constructor
	Game_Level();

	//member Functions


	//determine what is in the tile
	int check_Tile(int row, int col);

	//generates a random board coordinate 0-99
	//pair <int, int> gen_random();

	//checks to ensure that a shot is not repeated
	bool valid_Shot(pair<int, int> coord);
	//finds the coordinate for the next shot to be made
	void make_Shot();
	void update_Board(pair<int, int> coordinate);
	const int * getBoard();
	void ship2Board(int row, int col, int orien, int size);

};
#endif // !BOARD_H_INCLUDED