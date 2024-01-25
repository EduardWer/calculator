#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    while (true) {
        float x, y;
        string command;
        cout << " \nВведите первое число   ";
        cin >> x;
        cout << "Введите второе число число  ";
        cin >> y;
        cout << "Введите действие  ";
        cin >> command;
        switch (command[0]) {
            case 's':
                if (x < 0) {
                    cout<<sqrt(x);
                } else {
                    cout << "Нельзя взять корень из отрицательного числа";
                }
                break;

            case 'o':
                cout<<x/100;
                break;

            case '+':
                cout << x + y;
                break;
            case '-':
                cout << x - y;
                break;
            case '*':
                cout << x * y;
                break;
            case '/':
                if (y == 0) {
                    cout << "Ну ты и математик";
                } else {
                    cout << x / y;
                }
                break;
            case 'p':
                float poe = pow(x, y);
                cout << poe;
                break;

        }
        switch (command[0]) {
            case 'f':
                float result = 1;
                for (int i = 1;i<=x;i++){
                    result *=i;
                }
                cout<<result;
                break;
        }

    }
}
