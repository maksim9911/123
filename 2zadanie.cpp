#include <iostream> // программа выводит на экран возможные мужские и женские имена в зависимости от введенного пола.
using namespace std;

int main() {
    char pol;
    cin >> pol;
    
    if (pol == 'м') {
        for (int i = 0; i < 3; i++) 
        {
            cout << "Александр" << endl;
        }
    }
    else if (pol == 'ж') {
        for (int i = 0; i < 3; i++) 
        {
            cout << "Анастасия" << endl;
        }
    }
    
    return 0;
}