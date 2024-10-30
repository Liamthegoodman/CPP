#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Item {
private:
    string name;
    float price;
    int quantity;
public:
    Item(string name, float price, int quantity) {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }
    friend ofstream& operator<<(ofstream& ofs, Item i);
    friend ifstream& operator>>(ifstream& ifs, Item& i);
    friend ostream& operator<<(ostream& os, Item& i);
};

ofstream& operator<<(ofstream& ofs, Item i) {
    ofs << i.name << endl;
    ofs << i.price << endl;
    ofs << i.quantity << endl;
    return ofs;
}

ifstream& operator>>(ifstream& ifs, Item& i) {
    ifs >> i.name;
    ifs >> i.price;
    ifs >> i.quantity;
    return ifs;
}

ostream& operator<<(ostream& os, Item& i) {
    os << "Name " << i.name << endl;
    os << "Price " << i.price << endl;
    os << "Quantity " << i.quantity << endl;
    return os;
}

int main() {
    ofstream ofs("list.txt");
    Item i1("Onion", 1.34, 100);
    ofs << i1;
    Item i2("Garlic", 2.8, 45);
    ofs << i2;
    ofs.close();

    ifstream ifs("list.txt");
    Item i3("", 0.0f, 0); // Provide arguments for i3
    Item i4("", 0.0f, 0); // Provide arguments for i4
    ifs >> i3;
    ifs >> i4;

    cout << i3 << endl;
    cout << i4 << endl;

    return 0;
}