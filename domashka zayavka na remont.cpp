#include <iostream>
#include "windows.h"
#include <string>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string name{};
    std::string telefon{};
    std::string model{};

    std::cout << " Добро пожаловать в автосервис <Мастерская синдиката> " << std::endl;
    std::cout << " Заполните заявку на ремонт автомобиля" << std::endl;
    std::cout << " Укажите свое имя, номер телефона и марку автомобиля " << std::endl << std::endl;

    std::cout << ">> Введите свое имя " << std::endl;
    std::getline(std::cin, name);

    std::cout << ">> Введите номер телефона " << std::endl;
    std::getline(std::cin, telefon);

    std::cout << ">>Введите модель авто " << std::endl;
    std::getline(std::cin, model);

    std::cout << std::endl << std::endl;
    std::cout << " Ваши данные: " << std::endl;
    std::cout << " Имя: " << name << std::endl;
    std::cout << " Номер телефона: " << telefon << std::endl;
    std::cout << " Модель авто: " << model << std::endl << std::endl;

    std::cout << " Спасибо за обращение в сервис <Мастерская синдиката> " << std::endl;
    std::cout << " Наш оператор с вами свяжется через 2-3 дня " << std::endl;
}
