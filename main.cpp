#include <iostream>
#include <cmath>
using namespace std;
template <typename T> void MEAN (T a, T b, T arithmetic_mean, T geometric_mean) {
    arithmetic_mean = (a + b) / 2;
    geometric_mean = sqrt(a * b);
    cout << "Result:\n";
    cout << "Arithmetic mean : " << arithmetic_mean << endl;
    cout << "Geometric mean : " << geometric_mean << endl;
}

int main() {
    float A, B, C, D, arithmetic_mean_1, geometric_mean_1;
    cout << "Enter the number 1 : ";
    cin >> A;
    cout << "Enter the number 2 : ";
    cin >> B;
    cout << "Enter the number 3 : ";
    cin >> C;
    cout << "Enter the number 4 : ";
    cin >> D;
    MEAN<float>(A, B, arithmetic_mean_1, geometric_mean_1);
    MEAN<float>(A, C, arithmetic_mean_1, geometric_mean_1);
    MEAN<float>(A, D, arithmetic_mean_1, geometric_mean_1);
    return 0;
}
