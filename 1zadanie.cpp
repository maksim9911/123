#include <iostream> // программа определяет, где находится точка (х,у) относительно заштрихованной области, которая на рисунке.
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    
    if (x == -2 || x == 3 || y == x)
        cout << "На границе";
    else if (x > -2 && x < 3 && y > x)
        cout << "Да";
    else
        cout << "Нет";
    
    return 0;
}