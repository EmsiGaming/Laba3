

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
    std::cout << "*******����������� ������ 3******\n";
    int age;
    string name;
    int favNumber;
    cout << "������ ��� ��:\n";
    cin >> age;
    cout << "������ ���� ��'�\n";
    std::getline(cin >> std::ws, name);
    cout <<"������ ���� �������� �����\n";
    cin >> favNumber;
    std::cout << "***��������� ������� ����������:***\n";
    cout<< " " << endl;
    AgeProcesser(age);
    NameProcesser(name);
    FavNumProcesser(favNumber);

}

void AgeProcesser(int age)
{
    if (age >= 18)
    {
        cout << "�� ���������(��)\n";
    }
    else 
    {
        cout << "�� �� � �����(��)\n";
        cout << (18 - age) << " ���� ���������� �� ���������\n";
    }
}

void NameProcesser(string name)
{
    int nameSize = name.length();
    cout << nameSize << " ������� � ������ ����\n";
}

void FavNumProcesser(int favNum)
{
    (favNum % 2 == 0) ? cout << "��� �������� ����� ������ ����" : cout << "��� �������� ����� �� ������ ����";

}

/*�������� 䳿 �� ������������ ��������� �� �������� � � ��� ���� �� � ���� ������� � c#
*/
