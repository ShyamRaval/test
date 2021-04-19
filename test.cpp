#include "test.h"

void shyam::game::status()
{
	system("CLS");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (pointer==&check_type[i][j])
				std::cout << check_type[i][j] << "<-  ";
			else
				std::cout << check_type[i][j] << "    ";
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
bool shyam::game::process()
{
	switch (move)
	{
	case 119:
		std::cout << "w" << std::endl;
		pointer = pointer - 3;
		break;
	case 97:
		std::cout << "a" << std::endl;
		if (pointer != &check_space[0][0])
		pointer = pointer - 1;
		break;
	case 115:
		std::cout << "s" << std::endl;
		pointer = pointer + 3;
		break;
	case 100:
		std::cout << "d" << std::endl;
		if(pointer!=&check_space[2][2])
		pointer = pointer + 1;
		break;
	case 111:
		std::cout << "Enter oku" << std::endl;
		//if()
		break;
	default:
		return 1;
		break;
	}
	return 0;
}

bool shyam::game::is_move_oku()
{
	if (move == 111)
		return 0;
	else
		return 1;
}