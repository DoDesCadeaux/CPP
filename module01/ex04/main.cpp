#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!*argv[1] || !*argv[2] || !*argv[3])
		{
			std::cerr << "argument is empty" << std::endl;
			return (2);
		}

		std::string	file_path = argv[1];
		std::string s1 = argv[2];
		std::string	s2 = argv[3];
		std::fstream ifs;

		ifs.open(file_path);
		if (!ifs.is_open())
		{
			std::cerr << "Can't open " << argv[1] << std::endl;
			return (3);
		}

		std::ofstream	ofs;
		std::string		replace_file = file_path.substr(0) + ".replace";
		ofs.open(replace_file);
		if (!ofs.is_open())
		{
			std::cerr << "Can't create " << replace_file << std::endl;
			return (4);
		}

		std::string line;

		while (std::getline(ifs, line))
		{
			std::size_t found = line.find(s1);

			while (found != std::string::npos)
			{
				std::string prefix = line.substr(0, found);
				std::string suffix = line.substr(found + s1.length());

				line = prefix + s2 + suffix;
				found = line.find(s1);
			}
			ofs << line << std::endl;
		}
		ofs.close();
	}
	else
	{
		std::cerr << "Need 4 arguments" << std::endl;
		return (1);
	}
}
