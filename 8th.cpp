#include <iostream>
#include <cmath> 

using namespace std;

// ����һ��BMI��
class BMI {
private:
    int feet;       // ���(Ӣ��)
    int inches;     // ���(Ӣ��)
    double pounds;  // ����(��)
    const int INCHES_PER_FOOT = 12;          // ÿӢ�ߵ�Ӣ����
    const double METERS_PER_INCH = 0.0254;   // ÿӢ�������
    const double KILOS_PER_POUND = 1 / 2.2;  // ÿ����ǧ����

public:
    // ���캯������ʼ����ߺ�����
    BMI(int ft, int in, double lbs) : feet(ft), inches(in), pounds(lbs) {}

    // ���������(Ӣ��)
    int totalInches() const {
        return feet * INCHES_PER_FOOT + inches;
    }

    // ����BMI
    double calculateBMI() const {
        double heightInMeters = totalInches() * METERS_PER_INCH;
        double weightInKilos = pounds * KILOS_PER_POUND;
        return weightInKilos / pow(heightInMeters, 2);
    }

    // ���BMI���
    void displayBMI() const {
        cout << "���BMI��: " << calculateBMI() << endl;

        if (calculateBMI() < 18.5) {
            cout << "���ط���: ����" << endl;
        }
        else if (calculateBMI() >= 18.5 && calculateBMI() < 24) {
            cout << "���ط���: ����" << endl;
        }
        else if (calculateBMI() >= 24 && calculateBMI() < 28) {
            cout << "���ط���: ƫ��" << endl;
        }
        else if (calculateBMI() >= 28 && calculateBMI() <= 34) {
            cout << "���ط���: ����" << endl;
        }
        else {
            cout << "���ط���: �ǳ�����" << endl;
        }
    }
};

int main() {
    // �û�����
    int feet, inches;
    double pounds;

    cout << "������������(Ӣ�߲���): ";
    cin >> feet;
    cout << "������������(Ӣ�粿��): ";
    cin >> inches;
    cout << "�������������(��): ";
    cin >> pounds;

    // ����BMI����
    BMI bmiCalculator(feet, inches, pounds);

    // ���ó�Ա��������ʾBMI
    bmiCalculator.displayBMI();

    return 0;
}
