#include <iostream>

using namespace std;

int main() {
    // �W�������������
    double N;

    // �C���i��J�����q
    double R;

    // �A���U�s��W�s�ɡA�W�����|�X�������
    double D;

    // Ū���W�������������
    cin >> N;

    // Ū���C���i��J�����q
    cin >> R;

    // Ū���A���U�s��W�s�ɡA�W�����|�X�������
    cin >> D;

    // �p��һݮɶ�
    double hours = 0.0;
    double waterLevel = 0.0;

    while (waterLevel < N) {
        // �p�G�����w���A���_�j��
        if (waterLevel >= N) {
            break;
        }

        // �U�s
        hours += 1.0;

        // �W�s�D���e�ˬd�����O�_�w��
        if (waterLevel + R >= N) {
            break;
        }

        // �W�s�D��
        waterLevel += R;

        // �C���W�s���|�|��
        waterLevel -= D;
    }

    // ��X�һݮɶ�
    cout << hours << endl;

    return 0;
}
