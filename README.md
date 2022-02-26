# dirent2
struct to more easy to use dirent.h,
same to dirent get file and folder name in directory.

```cpp
#include "dirent2.hpp"
// exemple simple
struct dirent2 d2;
d2.scan("."); // scan '.' directory
d2.print(); // print all name in console

// exemple advenced loop
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
