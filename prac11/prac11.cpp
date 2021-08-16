#include <iostream>

// Declare a class called item having data members item_code, item_name, cost and discount.
// Derive two classes from class item, namely employee and customer. The class employee has
// datamembers like employee_code, employee_name and amount. The class customer has
// datamembers like customer_name and amount. Define following functions for
// - initializing data members.
// - displaying the values of data members.
// - computing amount to be paid for a purchased item. Also define function main to create objects of
// both derived classes and to show usage of above functions.

using namespace std;

class item {
    private:    
        int item_code;
        char item_name[30];
        double cost;
        double discount;
    public:
    void getdata()
    {
        cout<<"Enter item code: ";
        cin >> item_code;
        cout<<"Enter item name: ";
        cin >> item_name;
        cout<<"Enter cost: ";
        cin >> cost;
        cout<<"Enter discount: ";
        cin >> discount;
    }
    void display()
    {
        cout << "----------------------------------------------------------------" << endl;
        cout<<"Item code: "<<item_code<<endl;
        cout<<"Item name: "<<item_name<<endl;
        cout<<"Cost: "<<cost<<endl;
        cout<<"Discount: "<<discount<<endl;
        cout << "----------------------------------------------------------------" << endl;
    }
    double get_cost()
    {
        return cost-((cost*discount)/100);
    }

    
};
class employee:public item {
    private:
    int employee_code;
    char employee_name[30];
    public:
    void getdata()
    {
        item::getdata();
        cout<<"Enter employee code: ";
        cin >> employee_code;
        cout<<"Enter employee name: ";
        cin >> employee_name;
    }
    void display()
    {
        item::display();
        cout<<"Employee code: "<<employee_code<<endl;
        cout<<"Employee name: "<<employee_name<<endl;
    }

};

class customer:public item {
    char customer_name[30];
    int amount;
    public:
    void getdata()
    {
        cout<<"Enter customer name: ";
        cin >> customer_name;
        cout<<"Enter amount: ";
        cin >> amount;
    }
    void display()
    {
        cout << "----------------------------------------------------------------" << endl;
        cout<<"Customer name: "<<customer_name<<endl;
        cout<<"Amount: "<<amount<<endl;
        cout << "----------------------------------------------------------------" << endl;
    }
    public:int amount_t()
    {
        cout << get_cost() << endl;
        cout<<"Amount to be paid: "<< amount*get_cost() <<endl;
        return 0;
    }
};

int main()
{
    employee a;
    customer b;
    a.getdata();
    a.display();
    b.getdata();
    b.display();
    b.amount_t();
}