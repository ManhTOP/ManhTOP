#include <iostream>

using namespace std;

int tinhTuoi(int n) {
    int s = 2021 - n;
    cout << "Tuoi cua ban: " << s;
}

int main() {
    tinhTuoi(2001);
    return 0;
}