#include "car.h"
#include <iostream>

using namespace std;

int main() {
    CCar* pC = 0;
    pC = new CCar();    //  インスタンス生成,アドレスがポインタpCに渡されます。なお、インスタンスへのポインタの操作の仕方の考え方は、C言語の構造体のものに似ています
    pC->supply(10);      //  燃料補給
    pC->move();          //  移動
    pC->move();          //  移動
    delete pC;          //  インスタンスの消去
    cout << "インスタンスの消去終了" << endl;
    return 0;
}
