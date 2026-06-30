#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Class to store product details
class Product {
public:
    int id;
    string name;
    int quantity;
    float price;

    // Constructor
    Product(int i, string n, int q, float p) {
        id = i;
        name = n;
        quantity = q;
        price = p;
    }
};

// Vector to store products
vector<Product> inventory;

// Function to add a product
void addProduct() {
    int id, quantity;
    string name;
    float price;

    cout << "\nEnter Product ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, name);

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Product Price: ";
    cin >> price;

    inventory.push_back(Product(id, name, quantity, price));

    cout << "\nProduct Added Successfully!\n";
}

// Function to view all products
void viewProducts() {

    if (inventory.empty()) {
        cout << "\nNo Products Available!\n";
        return;
    }

    cout << "\n========== PRODUCT LIST ==========\n";

    for (auto &p : inventory) {
        cout << "Product ID : " << p.id << endl;
        cout << "Product Name : " << p.name << endl;
        cout << "Quantity : " << p.quantity << endl;
        cout << "Price : Rs. " << p.price << endl;
        cout << "---------------------------------\n";
    }
}

// Function to search a product
void searchProduct() {
    int id;

    cout << "\nEnter Product ID to Search: ";
    cin >> id;

    for (auto &p : inventory) {
        if (p.id == id) {
            cout << "\nProduct Found!\n";
            cout << "Name : " << p.name << endl;
            cout << "Quantity : " << p.quantity << endl;
            cout << "Price : Rs. " << p.price << endl;
            return;
        }
    }

    cout << "\nProduct Not Found!\n";
}

// Function to update a product
void updateProduct() {
    int id;

    cout << "\nEnter Product ID to Update: ";
    cin >> id;

    for (auto &p : inventory) {
        if (p.id == id) {

            cin.ignore();

            cout << "Enter New Product Name: ";
            getline(cin, p.name);

            cout << "Enter New Quantity: ";
            cin >> p.quantity;

            cout << "Enter New Price: ";
            cin >> p.price;

            cout << "\nProduct Updated Successfully!\n";
            return;
        }
    }

    cout << "\nProduct Not Found!\n";
}

// Function to buy a product
void buyProduct() {
    int id, buyQty;

    cout << "\nEnter Product ID to Buy: ";
    cin >> id;

    for (auto &p : inventory) {
        if (p.id == id) {

            cout << "Available Quantity: " << p.quantity << endl;
            cout << "Enter Quantity to Buy: ";
            cin >> buyQty;

            if (buyQty <= p.quantity) {
                p.quantity -= buyQty;

                float total = buyQty * p.price;

                cout << "\nPurchase Successful!" << endl;
                cout << "Total Bill = Rs. " << total << endl;
                cout << "Remaining Quantity = " << p.quantity << endl;
            }
            else {
                cout << "\nInsufficient Stock Available!\n";
            }

            return;
        }
    }

    cout << "\nProduct Not Found!\n";
}

// Function to delete a product
void deleteProduct() {
    int id;

    cout << "\nEnter Product ID to Delete: ";
    cin >> id;

    for (int i = 0; i < inventory.size(); i++) {
        if (inventory[i].id == id) {

            inventory.erase(inventory.begin() + i);

            cout << "\nProduct Deleted Successfully!\n";
            return;
        }
    }

    cout << "\nProduct Not Found!\n";
}

// Main Function
int main() {

    int choice;

    do {
        cout << "\n========================================";
        cout << "\n Stationery Shop Inventory Management";
        cout << "\n========================================";
        cout << "\n1. Add Product";
        cout << "\n2. View Products";
        cout << "\n3. Search Product";
        cout << "\n4. Update Product";
        cout << "\n5. Buy Product";
        cout << "\n6. Delete Product";
        cout << "\n7. Exit";
        cout << "\n----------------------------------------";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            addProduct();
            break;

        case 2:
            viewProducts();
            break;

        case 3:
            searchProduct();
            break;

        case 4:
            updateProduct();
            break;

        case 5:
            buyProduct();
            break;

        case 6:
            deleteProduct();
            break;

        case 7:
            cout << "\nThank You! Exiting Program...\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 7);

    return 0;
}