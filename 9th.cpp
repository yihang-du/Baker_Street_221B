#include <iostream>
#include <cstring>  

using namespace std;

// ����һ��Person��
class Person {
private:
    static const int SIZE = 50;  
    char firstName[SIZE];
    char lastName[SIZE];
    char fullName[SIZE * 2 + 3];  // ���ڴ洢ƴ�Ӻ��ȫ��

public:
    // �������ֺ�����
    void inputNames() {
        cout << "Enter your first name: ";
        cin.getline(firstName, SIZE);  // ��ȡ����
        cout << "Enter your last name: ";
        cin.getline(lastName, SIZE);   // ��ȡ����
    }

    // ƴ�����Ϻ�����
    void combineNames() {
        strcpy_s(fullName, lastName); 
        strcat_s(fullName, ", ");      
        strcat_s(fullName, firstName;
    }

    // �����Ϻ��ȫ��
    void displayFullName() const {
        cout << "Here's the information in a single string: " << fullName << endl;
    }
};

int main() {
    // ����Person����
    Person person;
    person.inputNames();
    person.combineNames();
     // ��ʾ��Ϻ��ȫ��
    person.displayFullName();

    return 0;
}
