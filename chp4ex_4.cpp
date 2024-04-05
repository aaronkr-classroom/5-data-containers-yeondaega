#include <iostream>
#include <iomanip>
#include <cmath> // For log10 function

using namespace std;

int main() {
    double max_value = 1000.0;
    int max_width = log10(max_value * max_value) + 6; // �ִ� �ڸ��� ���
    int value_width = log10(max_value) + 6; // ���� �ִ� �ڸ��� ���

    cout << setw(value_width) << left << "Value" << setw(max_width) << left << "Squared Value" << endl;
    cout << setw(value_width + max_width) << setfill('-') << "" << endl;
    cout << setfill(' '); // fill character�� reset

    for (double i = 1.0; i <= max_value; ++i) {
        cout << setw(value_width) << left << fixed << setprecision(0) << i << setw(max_width) << left << fixed << setprecision(0) << i * i << endl;
    }

    return 0;
}

