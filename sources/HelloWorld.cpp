#include <iostream>
#include <string>
int main()
{
    std::string username; // Создаем переменную для хранения имени пользователя
    std::cout << "Enter your name:" << std::endl; // Выводим запрос имени
    std::cin >> username; // Вводим имя пользователя с клавиатуры
    std::cout << "Hello, World! From " << username; // Выводим получившееся предложение
}
