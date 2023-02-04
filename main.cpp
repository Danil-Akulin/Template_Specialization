#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Printer
{
public:
    void Print (T value)
    {
        cout << value << endl;
    }
};

template<>
class Printer<string> {
public:
    static void Print(string value)
    {
        cout << "----" << value << "----" << endl;
    }
};

int main() {
    Printer<string> printer;
    printer.Print("Mazeratti");

    Printer<int> printer2;
    printer2.Print(232);
    return 0;
}