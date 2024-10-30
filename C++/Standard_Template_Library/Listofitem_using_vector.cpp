#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

class Item {
private:
    string name;
    float price;
    int quantity;
public:
    Item() : name(""), price(0.0), quantity(0) {} // Default constructor
    Item(string name, float price, int quantity) {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    friend ifstream& operator>>(ifstream &fis, Item &i);
    friend ofstream& operator<<(ofstream &fos, const Item &i);
    friend ostream& operator<<(ostream &os, const Item &i); // For printing to console
};

ifstream& operator>>(ifstream &fis, Item &i) {
    fis >> i.name >> i.price >> i.quantity;
    return fis;
}

ofstream& operator<<(ofstream &fos, const Item &i) {
    fos << i.name << " " << i.price << " " << i.quantity << endl;
    return fos;
}

ostream& operator<<(ostream &os, const Item &i) {
    os << "Name: " << i.name << ", Price: " << i.price << ", Quantity: " << i.quantity;
    return os;
}

int main() {
    string name;
    int n;
    float price;
    int quantity;
    cout << "Enter the number of Items: ";
    cin >> n;
    vector<Item*> list;
    cout << "Enter all items:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << " Item Name, price, and quantity: ";
        cin >> name >> price >> quantity;
        list.push_back(new Item(name, price, quantity));
    }
    
    ofstream fos("Items_store.txt");
    vector<Item*>::iterator itr;
    for (itr = list.begin(); itr != list.end(); itr++) {
        fos << **itr;
    }
    fos.close(); // Close the file after writing

    Item item;
    ifstream fis("Items_store.txt");
    for (int i = 0; i < n; i++) {
        fis >> item;
        cout << "Item " << i + 1 << ": " << item << endl;
    }
    fis.close(); // Close the file after reading

    // Clean up dynamically allocated memory
    for (itr = list.begin(); itr != list.end(); itr++) {
        delete *itr;
    }
    list.clear();

    return 0;
}
