#include <iostream>
#include "Skku.h"

using namespace std;

int main() {
    // 오지훈 객체 생성
    Skku jho = Skku(3.6, 55.0f);
    // 장정훈 객체 생성
    Skku jhj = Skku(3.65, 51.0f);
    // 남택현 객체 생성
    Skku thn = Skku(3.1, 60.0f);

    cout << "오지훈 서류 결과: ";
    if (jho.isPassSamsung() == true) {
        cout << "SamSungMan" << endl;
    } else {
        cout << "Fail" << endl;
    }

    cout << "장정훈 서류 결과: ";
    if (jhj.isPassSamsung() == true) {
        cout << "SamSungMan" << endl;
    } else {
        cout << "Fail" << endl;
    }

    cout << "남택현 서류 결과: ";
    if (thn.isPassSamsung() == true) {
        cout << "SamSungMan" << endl;
    } else {
        cout << "Fail" << endl;
    }
}
