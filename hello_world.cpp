#include <iostream>
#include <string>

int main() {
    // Получаем имя пользователя из ввода
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    // Печать приветствия с именем пользователя
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
