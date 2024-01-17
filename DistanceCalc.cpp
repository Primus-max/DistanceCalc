#include <iostream>
using namespace std;

/// <summary>
/// Метод расчёта пройденного пути
/// </summary>
/// <param name="V"></param>
/// <param name="T"></param>
/// <param name="A"></param>
/// <returns>S = пройденный путь</returns>
float DistanceCalc(float V, float T, float A) 
{
    float S = V * T + (A * T * T) / 2;
    return S;
}

int main() 
{
    setlocale(LC_ALL, "Russian");

    // Переменные для хранения пользовательсого ввода
    float V, T, A;

    cout << "Введите скорость (V): ";
    cin >> V;

    cout << "Введите время (T): ";
    cin >> T;

    cout << "Введите ускорение (A): ";
    cin >> A;

    // Вычисляем пройденное расстояние по формуле
    float S = DistanceCalc(V, T, A);

    // Выводим результат
    cout << "Пройденное расстояние: " << S << std::endl;  
}
