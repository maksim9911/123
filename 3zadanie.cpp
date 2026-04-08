#include <iostream> // целые числа в сточку через пробел. через цикл for
using namespace std;

int main() {
    for (int i = 1; i <= 21; i += 2) {
        cout << i << " ";
    }
    return 0;
}



#include <iostream> // целые числа в сточку через пробел. через цикл while
using namespace std;

int main() {
    int i = 1;
    while (i <= 21) {
        cout << i << " ";
        i += 2;
    }
    return 0;
}




#include <iostream> // целые числа в сточку через пробел. через цикл do while 
using namespace std;

int main() {
    int i = 1;
    do {
        cout << i << " ";
        i += 2;
    } while (i <= 21);
    return 0;
}
