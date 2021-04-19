#include "test.h"

void shyam::game::status()
{
	system("CLS");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (check_space[i][j] == 1)
			{
				if (data_pointer == &check_space[i][j])
					std::cout << check_type[i][j] << "<-  ";
				else
					std::cout << check_type[i][j] << "    ";
			}
			else
			{
				if (data_pointer == &check_space[i][j])
					std::cout <<  "*<-  ";
				else
					std::cout <<  "*    ";
			
			}
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}
	std::cout << "player " << turn + 1 << " turn" << std::endl;
	std::cout << "w : up \na : left \ns : down \nd : right \no : enter \nEnter your response in small : ";
}
void shyam::game::get_input()
{
	std::cin >> move;
}
void shyam::game::process()
{
	switch (move)
	{
	case 119:
		std::cout << "w" << std::endl;
		if(!(data_pointer < &check_space[1][0]))
		data_pointer = data_pointer - 3;
		break;
	case 97:
		std::cout << "a" << std::endl;
		if (data_pointer != &check_space[0][0])
		data_pointer = data_pointer - 1;
		break;
	case 115:
		std::cout << "s" << std::endl;
		if (!(data_pointer > &check_space[1][2]))
		data_pointer = data_pointer + 3;
		break;
	case 100:
		std::cout << "d" << std::endl;
		if(data_pointer!=&check_space[2][2])
		data_pointer = data_pointer + 1;
		break;
	case 111:
		std::cout << "Enter oku" << std::endl;
		if (0 == check_space[shyam::game::return_i()][shyam::game::return_j()])
		{
			check_space[shyam::game::return_i()][shyam::game::return_j()] = 1;
			check_type[shyam::game::return_i()][shyam::game::return_j()] = turn;
			change_turn();
		}
		break;
	default:
		break;
	}
}

bool shyam::game::is_move_oku()
{
	if (move == 111)
		return 0;
	else
		return 1;
}
void shyam::game::change_turn()
{
	if (turn == 0)
		turn = 1;
	else
		turn = 0;
}
int shyam::game::return_i()
{
	return (data_pointer - &check_space[0][0]) / 3;
}
int shyam::game::return_j()
{
	return (data_pointer - &check_space[0][0]) % 3;
}