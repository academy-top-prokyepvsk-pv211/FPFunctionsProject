#include <iostream>

using namespace std;

int global;

// прототипы
int Counter();
void Func();
void PrintStars(int length = 20);


// сигнатуры
// int (int, int)
int Sum(int a, int b)
{
    return a + b;
}

// int (int, int, int)
int SumThree(int a, int b, int c)
{
    return a + b + c;
}

// int (int, int)
int Mult(int a, int b)
{
    return a * b;
}

int main()
{
    cout << Counter() << "\n"; // 1
    cout << Counter() << "\n"; // 2

    Func();

    cout << Counter() << "\n"; // 4
    cout << Counter() << "\n"; // 5
    cout << Counter() << "\n"; // 6

    

    /*
    lengthCharLine - кэмэл нотация
    PrintCharLine  - паскаль нотация

    length_char_line - "php" нотация ?
    print_char_line()
    */

    int lengthLine{ 20 };

    PrintStars();

    //cout << "Welcome!\n";

    //PrintStars(50);
    //PrintStars();
    //PrintStars(70);

    //PrintCharLine(30, '+');

    //int n;
    ////n = Hundred();
    //int a{ 40 };
    //int b{ 50 };

    //n = Amount(a, b) + Hundred() + Amount(30, 60);

    //cout << "n = " << n << "\n";

    //int var = 200;
    //cout << "var = " << var << "\n";
    //InitHundred(var);
    //cout << "var = " << var << "\n";

    //cout << Fib(10);
}

int Hundred()
{
    return 100;
}

int Amount(int a, int b)
{
    //int c = a + b;
    //return c;
    return a + b;
}

void PrintStars10()
{
    for (int i = 0; i < 10; i++)
        cout << "*";
    cout << "\n";
}

void PrintStars(int length)
{
    for (int i = 0; i < length; i++)
        cout << "*";
    cout << "\n";
}

void PrintCharLine(int length, char symbol)
{
    for (int i = 0; i < length; i++)
        cout << symbol;
    cout << "\n";
}

void InitHundred(int var)
{
    var = 100;
}

long long Fib(int n)
{
    long long f0{}, f1{ 1 };
    long long f;
    for (int i = 0; i < n; i++)
    {
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }
    return f0;
}

int Counter()
{
    static int count{};
    return ++count;
}

void Func()
{
    cout << Counter() << "\n"; // 3
}
