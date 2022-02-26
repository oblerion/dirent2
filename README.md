# dirent2
Struct to more easy to use [dirent.h](https://github.com/tronkko/dirent).
<br>Same to dirent get file and folder information.
<br>Need dirent.h for work.
## some exemple
```cpp
#include "dirent2.hpp"
// simple
struct dirent2 d2;
d2.scan("."); // scan '.' directory
d2.print(); // print all name in console

// advenced loop
for(int i=0;i<d2.nd;i++)
{
	if(d2.Type_at(i)=='f')
  	{
   		printf("\n%s is file",d2.Name_at(i).c_str());
  	}
  	if(d2.Type_at(i)=='d')
  	{
    		printf("\n%s is directory",d2.Name_at(i).c_str());
  	}
}

```
## fast describle
```cpp
struct dirent2
{
	int nb=0;// number of all name found
	void scan(std::string pstr);// scan dir path is pstr
	void print();// print all in console
	std::string Name_at(int id);// get string name at id
	char Type_at(int id);// get char type at id --> 'f' file or 'd' dir
};
```
