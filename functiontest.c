#include <stdio.h>

/**
 *init_player - Just test for initialize function with pointer
 */

int *init_player(int *lvl)
{
	*lvl = 5;
	return (lvl);
}

int main(void)
{
	int player_lvl;
	int *lvl_ptr = &player_lvl;

	lvl_ptr = init_player(lvl_ptr);

	printf("U start lvl: %d\n", *lvl_ptr);

	*lvl_ptr += 8;

	printf("U are lvl: %d\n", *lvl_ptr);

	lvl_ptr = init_player(lvl_ptr);

	printf("U finish with lvl: %d\n", *lvl_ptr);

	return (0);
}
