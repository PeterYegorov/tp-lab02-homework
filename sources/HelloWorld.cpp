#include <iostream>
#include <string>
int main()
{
    std::string username;
    std::cout << "Enter your name:" << std::endl;
    std::cin >> username;
    std::cout << "Hello, World! From " << username;
}
