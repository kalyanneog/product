#include <iostream>
using namespace std;

class Product
{
    int id;
    string name;
    float price;
    int sales[12];
public:
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> id;
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter sales for 12 months: ";
        for (int i = 0; i < 12; i++)
            cin >> sales[i];
    }
    int totalQuantity()
    {
        int total = 0;
        for (int i = 0; i < 12; i++)
            total += sales[i];
        return total;
    }
    void display()
    {
        cout << "\nProduct ID: " << id;
        cout << "\nProduct Name: " << name;
        cout << "\nPrice: " << price;
        cout << "\nTotal Quantity Sold: " << totalQuantity();
        cout << "\nTotal Bill: " << totalQuantity() * price << endl;
    }
};
int main()
{
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    Product p[10];  
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << ":\n";
        p[i].input();
    }
    cout << "\n--- Product Details ---\n";
    for (int i = 0; i < n; i++)
    {
        p[i].display();
    }
    return 0;
}
