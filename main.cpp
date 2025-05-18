#include <iostream>
#include <string>
#include <cstdint>

#define func auto
using i32 = typename std::int32_t;

func main(i32 argc, char* argv[]) -> i32
{
  std::string name;
  std::cin >> name;
  std::cout << "Hello, " << name <<  '!' << std::endl;
  return 0;
}