

#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;


void AgeProcesser(int age);
void NameProcesser(string name);
void FavNumProcesser(int favNum);
int main()
{
    SetConsoleOutputCP(1251);
    std::cout << "*******Лабараторна робота 3******\n";
    int age;
    string name;
    int favNumber;
    cout << "Введіть свій вік:\n";
    cin >> age;
    cout << "Введіть ваше ім'я\n";
    std::getline(cin >> std::ws, name);
    cout <<"Введіть ваше улюблене число\n";
    cin >> favNumber;
    std::cout << "***Результат обробки інформації:***\n";
    cout<< " " << endl;
    AgeProcesser(age);
    NameProcesser(name);
    FavNumProcesser(favNumber);

}

void AgeProcesser(int age)
{
    if (age >= 18)
    {
        cout << "Ти повнолітній(ня)\n";
    }
    else 
    {
        cout << "Ти ще є малий(ла)\n";
        cout << (18 - age) << " років залишилось до повноліття\n";
    }
}

void NameProcesser(string name)
{
    int nameSize = name.length();
    cout << nameSize << " символів у вашому імені\n";
}

void FavNumProcesser(int favNum)
{
    (favNum % 2 == 0) ? cout << "Твоє улюблене число кратне двом" : cout << "Твоє улюблене число не кратне двом";

}

/*Принципи дії та застосування операторів та операцій я і так знаю ще з часів рооботи з c#
*/
