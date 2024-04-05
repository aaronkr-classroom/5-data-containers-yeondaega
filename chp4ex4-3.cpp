#include <iostream>
#include <iomanip>
#include <cmath> 

using namespace std;

int main() {
    int max_value = 1000;
    int max_width = log10(max_value * max_value) + 1; // 최대 자릿수 계산
    int value_width = log10(max_value) + 1; // 값의 최대 자릿수 계산

    cout << setw(value_width) << "Value" << setw(max_width) << "Squared Value" << endl;
    cout << setw(value_width + max_width + 1) << setfill('-') << "" << endl;
    cout << setfill(' '); 

    for (int i = 1; i <= max_value; ++i) {
        cout << setw(value_width) << i << setw(max_width) << i * i << endl;
    }

    return 0;
}
