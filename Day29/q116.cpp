#include<iostream>
#include<string>
using namespace std;
class Item{
    public:
        int id;
        string name;
        int quantity;
    double price;
};
class inventory{
    private:
        Item stock[10000];
        int maxCapacity=10000;
        int currentCount=0;
    public:
void addItems(int id, string name, int qty, double price){
            if(currentCount >= maxCapacity){
                cout << "[Error] Warehouse is full!\n";}
            else {
                stock[currentCount].id = id;
                stock[currentCount].name = name;
                stock[currentCount].quantity = qty;
                stock[currentCount].price = price;
                currentCount++;
                cout << "[System] Added " << name << " to inventory.\n";
            }
        }
void updateQuantity(int searchId){
    bool found = false;
    int qnty;
    for(int i=0;i<currentCount;i++){
        if(stock[i].id == searchId){
            cout << "Enter the quantity to be updated for " << stock[i].name << ": ";
            cin >> qnty;
            stock[i].quantity = qnty;
            cout << "[System] Stock updated!\n";
            found = true;
            break;}}
        if(found == false){
            cout<<"[System] The stock is zero";}
    }
void displayInventory(){
    if (currentCount == 0) {
        cout << "[System] Warehouse is empty.\n";
        return;}
        cout << "\n=== CURRENT INVENTORY ===\n";
        for(int i = 0; i < currentCount; i++) {
            cout<<"ID:"<<stock[i].id<<" | Name: "<< stock[i].name<<" | Qty: "<<stock[i].quantity<<" | Price: $"<< stock[i].price<<"\n";}
}
void searchById(int searchId){
    bool found = false;
    for(int i = 0; i < currentCount; i++) {
        if(stock[i].id == searchId) {
            cout << "\n[Item Found]: "<<stock[i].name<< " | Qty: " <<stock[i].quantity<<" | Price: $"<< stock[i].price<<"\n";
            found = true;
            break;}}
            if(found == false) {
                cout << "\n[Error] Item ID not found in warehouse.\n";}
}
};
int main(){
    cout << "=== WAREHOUSE INITIALIZATION ===\n";
    inventory warehouse;
    int tId;
    string tName;
    int tQty;
    double tPrice;
    int choice;
    do{
        cout<<"\n\t\t===========Inventory Operations==========";
        cout<<"\n1. Add Items";
        cout<<"\n2. Display Inventory";
        cout<<"\n3. Search by ID";
        cout<<"\n4. Update Stock";
        cout<<"\n5. Exit";
        cout<<"\n==>";
        cin>>choice;
        if(choice==1){
            cout<<"\nEnter Id: ";
            cin>>tId;
            cout<<"\nEnter Name:";
            cin.ignore();
            getline(cin, tName);
            cout<<"\nEnter Quantity: ";
            cin>>tQty;
            cout<<"\nEnter Price: ";
            cin>>tPrice;
            warehouse.addItems(tId,tName,tQty,tPrice);
        }
        else if(choice==2){
            warehouse.displayInventory();
        }
        else if(choice==3){
            int searchId;
            cout << "\nEnter ID to search: ";
            cin >> searchId;
            warehouse.searchById(searchId);
        }
        else if(choice==4){
            int searchId;
            cout << "\nEnter ID to update stock: ";
            cin >> searchId;
            warehouse.updateQuantity(searchId);
        }
        else if(choice==5){
             cout<<"========CLOSING========";
            return 0;
        }
        else{cout<<"Invalid input!!";}
}
while(choice!=5);
return 0;
}