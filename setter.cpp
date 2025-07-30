#include <iostream>
#include <cstring>
using namespace std;

class Book {
private:
    int page;
    float price;
    char name[40];

public:
    void setPage(int p) {
        page = p;
    }

    void setPrice(float rs) {
        price = rs;
    }

    void setName(const char* n) {
        strcpy(name, n);
    }

    void Display() {
        cout << "Enter the page: " << page << endl;
        cout << "Enter the Price: " << price << endl;
        cout << "Enter the Name: " << name << endl;
    }
};

int main() {
    Book b1;
    cout << "-----------Book 1 Data-----------" << endl;
    b1.setPage(100);
    b1.setPrice(300);
    b1.setName("Fundamental Programming");
    b1.Display();
    Book b2;
        cout << "-----------Book 2 Data-----------" << endl;
        b2.setPage(300);
    b2.setPrice(3800);
    b2.setName("Object Oriented Programming");
    b2.Display();

    

    return 0;
}

