#include <iostream> // программа определяет, где находится точка (х,у) относительно заштрихованной области, которая на рисунке.
using namespace std;
 
int main() {
    double x, y;
    cin >> x >> y;
 
    if (x>=-23 && x<=0 && y>=x && y<=0)
        cout << "На границе";
    else if (x > -23 || y == 0 || y == x)
        cout << "Да";
    else
        cout << "Нет";
 
    return 0;
}
