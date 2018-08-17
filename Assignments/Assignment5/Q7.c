#include<stdio.h>
#include<stdlib.h>

enum fan_level
{
	Level1 = 1, Level2, Level3
};

int main (void)
{
	enum fan_level LEVEL = Level1;
	printf("%d", LEVEL);

}
