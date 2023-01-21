#include <iostream>

#define BLACK		"\033[0;30m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"
#define BLUE		"\033[0;34m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"
#define WHITE		"\033[0;37m"
#define NO_COLOUR	"\033[0m"

class Sample
{
public:
	char	a1;
	int 	a2;
	float	a3;

	Sample(char p1, int p2, float p3);
	~Sample(void);
};