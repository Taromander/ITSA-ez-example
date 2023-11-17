#include <iostream>

using namespace std;

int main() {
    // 蓄水池的滿水單位
    double N;

    // 每次可填入的水量
    double R;

    // 再次下山到上山時，蓄水池漏出的水單位
    double D;

    // 讀取蓄水池的滿水單位
    cin >> N;

    // 讀取每次可填入的水量
    cin >> R;

    // 讀取再次下山到上山時，蓄水池漏出的水單位
    cin >> D;

    // 計算所需時間
    double hours = 0.0;
    double waterLevel = 0.0;

    while (waterLevel < N) {
        // 如果水池已滿，中斷迴圈
        if (waterLevel >= N) {
            break;
        }

        // 下山
        hours += 1.0;

        // 上山挑水前檢查水池是否已滿
        if (waterLevel + R >= N) {
            break;
        }

        // 上山挑水
        waterLevel += R;

        // 每次上山都會漏水
        waterLevel -= D;
    }

    // 輸出所需時間
    cout << hours << endl;

    return 0;
}
