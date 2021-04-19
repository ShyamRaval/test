#include "test.h"
int main()
{
	shyam::game instance;
	instance.game_status = 1;
	while (instance.game_status)
	{
		instance.status();
		instance.get_input();
		instance.process();
	}
}
