#include <iostream>
#include <cstring>  

using namespace std;

// 定义一个Person类
class Person {
private:
    static const int SIZE = 50;  
    char firstName[SIZE];
    char lastName[SIZE];
    char fullName[SIZE * 2 + 3];  // 用于存储拼接后的全名

public:
    // 输入名字和姓氏
    void inputNames() {
        cout << "Enter your first name: ";
        cin.getline(firstName, SIZE);  // 读取名字
        cout << "Enter your last name: ";
        cin.getline(lastName, SIZE);   // 读取姓氏
    }

    // 拼接姓氏和名字
    void combineNames() {
        strcpy_s(fullName, lastName); 
        strcat_s(fullName, ", ");      
        strcat_s(fullName, firstName;
    }

    // 输出组合后的全名
    void displayFullName() const {
        cout << "Here's the information in a single string: " << fullName << endl;
    }
};

int main() {
    // 创建Person对象
    Person person;
    person.inputNames();
    person.combineNames();
     // 显示组合后的全名
    person.displayFullName();

    return 0;
}
