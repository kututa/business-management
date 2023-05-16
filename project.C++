#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product {
private:
    string name;
    int id;
    int quantity;
    double price;

public:
    Product(string name, int id, int quantity, double price) {
        this->name = name;
        this->id = id;
        this->quantity = quantity;
        this->price = price;
    }

    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    int getQuantity() const {
        return quantity;
    }

    double getPrice() const {
        return price;
    }

    void addQuantity(int amount) {
        quantity += amount;
    }

    void subtractQuantity(int amount) {
        quantity -= amount;
    }

    void setPrice(double newPrice) {
        price = newPrice;
    }
};

class Inventory {
private:
    vector<Product> products;

public:
    void addProduct(Product p) {
        products.push_back(p);
    }

    void removeProduct(int id) {
        for (int i = 0; i < products.size(); i++) {
            if (products[i].getId() == id) {
                products.erase(products.begin() + i);
                break;
            }
        }
    }

    Product* getProduct(int id) {
        for (int i = 0; i < products.size(); i++) {
            if (products[i].getId() == id) {
                return &products[i];
            }
        }
        return NULL;
    }

    void printInventory() const {
        for (int i = 0; i < products.size(); i++) {
            cout << "Product name: " << products[i].getName() << endl;
            cout << "Product ID: " << products[i].getId() << endl;
            cout << "Quantity: " << products[i].getQuantity() << endl;
            cout << "Price: " << products[i].getPrice() << endl << endl;
        }
    }
};

class Sale {
private:
    int productId;
    int quantity;
    double totalPrice;

public:
    Sale(int productId, int quantity, double totalPrice) {
        this->productId = productId;
        this->quantity = quantity;
        this->totalPrice = totalPrice;
    }

    int getProductId() const {
        return productId;
    }

    int getQuantity() const {
        return quantity;
    }

    double getTotalPrice() const {
        return totalPrice;
    }
};

class SalesHistory {
private:
    vector<Sale> sales;

public:
    void addSale(Sale s) {
        sales.push_back(s);
    }

    void printSales() const {
        for (int i = 0; i < sales.size(); i++) {
            cout << "Product ID: " << sales[i].getProductId() << endl;
            cout << "Quantity sold: " << sales[i].getQuantity() << endl;
            cout << "Total price: " << sales[i].getTotalPrice() << endl << endl;
        }
    }
};

class Employee {
private:
    string name;
    int id;
    string position;

public:
    Employee(string name, int id, string position) {
        this->name = name;
        this->id = id;
        this->position = position;
    }

    string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    string getPosition() const {
        return position;
    }

    void setPosition(string newPosition) {
        position = newPosition;
    }
};

class EmployeeList {
};