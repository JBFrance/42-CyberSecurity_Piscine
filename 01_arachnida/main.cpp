//#include "Spider.hpp"
//
//Psuedo code
//
//TO-DO:
//Implement hpp file and database struct
//Implement helper functions (help_check and verifyUrl first)
//Implement crawl()

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "Error: Invalid syntax, run with '--help' to see program options" << std::endl;
	else if (argc == 2)
	{
		if (help_check(argv[1] == 0))
		{
			displayOptions();
			return 0;
		}
		DataBase db;
		db = verifyUrl(argv[1]);
		crawl(db);
	}
	else if (argc == 3)
	{
		DataBase db = verifyOptions(argv[1]);
		verifyOptionsURl(argv[2], &db);
		crawl(db);
	}
	else
		std::cout << "Error: Invalid syntax, run with '--help' to see program options" << std::endl;
	return 0;
}
