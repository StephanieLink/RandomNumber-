#include <iostream>
#include <string>
#include <random>

int main()
{
    const std::string caracteres =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, caracteres.size() - 1);

    std::string resultado;

    for (int i = 0; i < 16; i++)
    {
        resultado += caracteres[dist(gen)];
    }

    std::cout << resultado << '\n';

    return 0;
}