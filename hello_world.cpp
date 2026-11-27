#include <iostream>
#include <string>

int
main()
{
  // Get user name from standard input.
  std::string name;
  std::cout << "Enter your name: ";
  std::cin >> name;
  // Output greeting with user name.
  std::cout << "Hello world from @" << name << std::endl;
  return 0;
}
