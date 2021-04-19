#pragma once 
#include <iostream>
namespace shyam
{
	class game
	{
	private:
	public:
		//grid 
		bool check_space[3][3] =
		{
			{0,0,0},
			{0,0,0},
			{0,0,0}
		};
		//grid type
		bool check_type[3][3]
		{	{0, 0, 0},
			{0, 0, 0},
			{0, 0, 0}			
		};
		//pointer for grid
		bool* data_pointer = &check_space[0][0];
		//bool for turn 0=o, 1=x
		bool turn=0;
		//char input variable for moving
		char move;
	public:
		//window status 0=close 
		bool game_status = 1;
		//takes input 
		void get_input();
		//shows status of the grid
		void status();
		//gameplay processor
		void process();
		//edits the grid 
		void write();
		//checks if move == oku
		bool is_move_oku();
		//change turn
		void change_turn();
		//reutrn i of space
		int return_i();
		//return j of space
		int return_j();
	};
}