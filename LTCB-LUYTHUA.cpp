#include <iostream>
using namespace std;

int main() {
    int coSo, soMu;
    long luyThua = 1;
    cout << "Nhap co so: ";
    cin >> coSo;
    cout << "Nhap so mu: ";
    cin >> soMu;
    for (int i = 1; i <= soMu; i++) {
        luyThua = luyThua * coSo;
    }
    cout << "--------------" << endl;
    cout << coSo << " ^ " << soMu << " = " << luyThua << endl;
    return 0;
}