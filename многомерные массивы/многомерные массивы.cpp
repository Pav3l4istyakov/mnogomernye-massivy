
#include<iostream>
int main()
{
    setlocale(LC_ALL, "RU");
    //задача 1;
    std::cout << "введите число для заполнения массива";
    const int number = 2;
    const int numbertwo = 5;
    int arr[number][numbertwo];
    int numbertree;
    std::cin >> numbertree;
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < numbertwo; j++)
        {
            arr[i][j] = numbertree * 2;
            numbertree *= 2;
            std::cout << arr[i][j] << " ";

        }

    }
    //задача 2;
    const int number1 = 3;
    const int number2 = 9;
    int num[number1][number2] = {};

    std::cout << "введите число для заполнения";
    std::cin >> num[0][0];
    for (int t = 0; t < number1; t++)
    {
        for (int i = 1; i < number2; i++)
        {
            num[t][i] = (t * number2) + (i + (num[0][0] - 1)) + 1;
        }
    }
    for (int t = 0; t < number1; t++)
    {
        for (int i = 0; i < number2; i++)
        std::cout<< num[t][i];
        std::cout << "\n";

        
    }
}

   







