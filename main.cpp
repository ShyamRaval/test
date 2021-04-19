#include "test.h"
int main()
{
	shyam::game g1;
	while (g1.game_status)
	{
		while (g1.is_move_oku())
		{
			g1.status();
			g1.get_input();
			g1.process();
		}
	}
}
