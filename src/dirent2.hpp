#ifndef dirent2_hpp
#define dirent2_hpp
#include <dirent.h>
#include <vector>
#include <string>
#include <cstdio>
#include <cstdlib>
struct dirent2
{
	struct dir2
	{
		char type='o';
		std::string name="";
	};
	std::vector<struct dir2> lp;
	struct dirent* sdir=0;
	DIR* rep=0;
	int nb=0;
	void scan(string pstr);
	void print();
	std::string Name_at(int id);
	char Type_at(int id);
};
#endif
