#include <iostream>
#include <cmath> 

using namespace std;

// 定义一个BMI类
class BMI {
private:
    int feet;       // 身高(英尺)
    int inches;     // 身高(英寸)
    double pounds;  // 体重(磅)
    const int INCHES_PER_FOOT = 12;          // 每英尺的英寸数
    const double METERS_PER_INCH = 0.0254;   // 每英寸的米数
    const double KILOS_PER_POUND = 1 / 2.2;  // 每磅的千克数

public:
    // 构造函数，初始化身高和体重
    BMI(int ft, int in, double lbs) : feet(ft), inches(in), pounds(lbs) {}

    // 计算总身高(英寸)
    int totalInches() const {
        return feet * INCHES_PER_FOOT + inches;
    }

    // 计算BMI
    double calculateBMI() const {
        double heightInMeters = totalInches() * METERS_PER_INCH;
        double weightInKilos = pounds * KILOS_PER_POUND;
        return weightInKilos / pow(heightInMeters, 2);
    }

    // 输出BMI结果
    void displayBMI() const {
        cout << "你的BMI是: " << calculateBMI() << endl;

        if (calculateBMI() < 18.5) {
            cout << "体重分类: 过轻" << endl;
        }
        else if (calculateBMI() >= 18.5 && calculateBMI() < 24) {
            cout << "体重分类: 适中" << endl;
        }
        else if (calculateBMI() >= 24 && calculateBMI() < 28) {
            cout << "体重分类: 偏重" << endl;
        }
        else if (calculateBMI() >= 28 && calculateBMI() <= 34) {
            cout << "体重分类: 肥胖" << endl;
        }
        else {
            cout << "体重分类: 非常肥胖" << endl;
        }
    }
};

int main() {
    // 用户输入
    int feet, inches;
    double pounds;

    cout << "请输入你的身高(英尺部分): ";
    cin >> feet;
    cout << "请输入你的身高(英寸部分): ";
    cin >> inches;
    cout << "请输入你的体重(磅): ";
    cin >> pounds;

    // 创建BMI对象
    BMI bmiCalculator(feet, inches, pounds);

    // 调用成员函数，显示BMI
    bmiCalculator.displayBMI();

    return 0;
}
