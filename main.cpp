#include <iostream>
#include <cstdint>

#define func auto
using i32 = typename std::int32_t;

func main(i32 argc, char* argv[]) -> i32
{
  std::cout << "Hello, world!" << std::endl;
  return 0;
}