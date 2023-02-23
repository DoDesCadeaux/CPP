#include "../includes/utils.hpp"

std::string truncateInfo(std::string info)
{
	int	spaceNb = 10 - info.length();
	if (spaceNb > 0 && info.size() < 9)
	{
		if (info.size() % 2 == 0)
			info = info.insert(0, spaceNb / 2, ' ');
		else
			info = info.insert(0, (spaceNb / 2) + 1, ' ');
		info = info.insert(info.size(), spaceNb / 2, ' ');
	}
	if (info.length() <= 10)
		return (info);
	else
	{
		info = info.substr(0, 9) + ".";
		return (info);
	}
}