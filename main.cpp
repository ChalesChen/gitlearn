#include <iostream>
#include <stdlib.h>
#include "add.h"
#include "sub.h"

int main(int argc,char* argv[])
{
  std::cout << add(100,200) << std::endl;
  std::cout << sub(200,20) << std::endl; 
 return 0;
}
