// Test.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>;
using namespace std;

double iteration(int monthlyPayment, int summ, int numberOfYears, double result) {
    return (12 * monthlyPayment * (pow(1 + result, numberOfYears) - 1)) / (summ * pow(1 + result, numberOfYears));
};

int main()
{
    double lastValue = 0;
    double result = 0.1;

    int summ;
    int monthlyPayment;
    int numberOfYears;

    cout << "Enter summ" << endl;
    cin >> summ;
    cout << "Enter monthlyPayment" << endl;
    cin >> monthlyPayment;
    cout << "Enter numberOfYears" << endl;
    cin >> numberOfYears;

    if (summ <= 0 || monthlyPayment <= 0 || numberOfYears < 1) {
        cout << "Error";
    }
    else {

        int check = pow(10, -3);

        while (abs(lastValue - result) > check) {
            lastValue = result;
            result = iteration(monthlyPayment, summ, numberOfYears, result);
        }

        cout << "p = " << result * 100;
    }
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
