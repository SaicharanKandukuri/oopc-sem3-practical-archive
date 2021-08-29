#include <iostream>
using namespace std;
// class employee derives information from admin and account and derive information from person class
// define four classes and update information contained employee class
class admin {
public:
    int id;
    char name[30];
    int age;
    char address[30];
    int phone;
    admin(){}
    admin(int id, char name[30], int age, char address[30], int phone) {
        this->id = id;
        strcpy(this->name, name);
        this->age = age;
        strcpy(this->address, address);
        this->phone = phone;
    }
    void show() {
        cout << "id: " << id << endl;
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "address: " << address << endl;
        cout << "phone: " << phone << endl;
    }
};
