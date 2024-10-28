#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");

    float x, y, z;

    cout << "Введите размеры бруска: ";
    cin >> x >> y >> z; 

    float cubes = floor((x / 5) * (y / 5) * (z / 5));
    
    cout << "Из этого бруска можно изготовить " << cubes << " кубиков.";

    if (cubes >= 27)
        cout << "Из них можно составить набор из 27 кубиков.";


    else
        cout << "Нельзя составить набор ";



    
}

