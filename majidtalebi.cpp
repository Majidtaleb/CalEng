#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "عدد اول را وارد کنید: ";
    cin >> num1;

    cout << "عدد دوم را وارد کنید: ";
    cin >> num2;

    cout << "عملگر را وارد کنید (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "جمع دو عدد: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "تفریق دو عدد: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "ضرب دو عدد: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "تقسیم دو عدد: " << num1 / num2 << endl;
            else
                cout << "تقسیم بر صفر ممکن نیست." << endl;
            break;
        default:
            cout << "عملگر وارد شده معتبر نیست." << endl;
            break;
    }

    return 0;
}