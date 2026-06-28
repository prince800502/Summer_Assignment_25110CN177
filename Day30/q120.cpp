#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int loadData(string names[], string passwords[], double balances[]) {
    ifstream inFile("bank_database.txt");
    if (!inFile) {
        cout << "[System] No existing database found on disk. Starting fresh.\n";
        return 0;}
    int count = 0;
    inFile >> count;
    for (int i = 0; i < count; i++) {
        inFile.ignore();
        getline(inFile, names[i]);
        inFile >> passwords[i];
        inFile >> balances[i];}
    inFile.close();
    cout << "[System] Successfully loaded " << count << " accounts from disk.\n";
    return count;}
void saveData(string names[], string passwords[], double balances[], int currentCount) {
    ofstream outFile("bank_database.txt");
    if (!outFile) {
        cout << "\n[Error] Critical Failure: Could not write to hard drive.\n";
        return;}
    outFile << currentCount << "\n";
    for (int i = 0; i < currentCount; i++) {
        outFile << names[i] << "\n";
        outFile << passwords[i] << "\n";
        outFile << balances[i] << "\n";}
    outFile.close();
    cout << "[System] Database securely backed up to 'bank_database.txt'.\n";}
int createAccount(string names[], string passwords[], double balances[], int currentCount) {
    if (currentCount >= 100) {
        cout << "\n[Error] Bank server capacity reached.\n";
        return currentCount;}
    cout << "\n--- OPEN NEW ACCOUNT ---\n";
    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, names[currentCount]);
    cout << "Set a Secure Password: ";
    cin >> passwords[currentCount];
    balances[currentCount] = 0.0;
    cout << "[System] Account successfully created for " << names[currentCount] << "!\n";
    return currentCount + 1;}
int authenticateUser(string names[], string passwords[], int currentCount) {
    string searchName, searchPass;
    cout << "\n--- SECURE LOGIN ---\n";
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, searchName);
    cout << "Enter Password: ";
    cin >> searchPass;
    for (int i = 0; i < currentCount; i++) {
        if (names[i] == searchName && passwords[i] == searchPass) {
            return i;}}
    return -1;}
void viewAllAccounts(string names[], double balances[], int currentCount) {
    if (currentCount == 0) {
        cout << "\n[System] No accounts currently registered in the mainframe.\n";
        return;
    }
    cout << "\n=== BANK ADMIN TERMINAL ===\n";
    for (int i = 0; i < currentCount; i++) {
        cout << "Client ID [" << i << "] | Name: " << names[i] << " | Balance: $" << balances[i] << "\n";}}
int main() {
string clientNames[100];
string clientPasswords[100];
double clientBalances[100];
cout << "========= BANKING SYSTEM =========\n";
int totalClients = loadData(clientNames, clientPasswords, clientBalances); 
int Choice;
do {
    cout << "\n1. Open New Account";
    cout << "\n2. Client ATM Login";
    cout << "\n3. Admin Dashboard (View All)";
    cout << "\n4. Shut Down Server & Save Data";
    cout << "\n==> ";
    cin >> Choice;
    if (Choice == 1){
        totalClients = createAccount(clientNames, clientPasswords, clientBalances, totalClients);}
    else if (Choice == 2) {
        int loggedInID = authenticateUser(clientNames, clientPasswords, totalClients);
        if (loggedInID != -1) {
            cout << "\n[System] Access Granted. Welcome, " << clientNames[loggedInID] << "!\n";
            int atmChoice;
            do {
                cout << "\n-- ATM CONTROLS --\n";
                cout << "1. Deposit Funds\n";
                cout << "2. Withdraw Funds\n";
                cout << "3. Check Balance\n";
                cout << "4. Logout\n";
                cout << "==> ";
                cin >> atmChoice;
                if (atmChoice == 1) {
                    double amount;
                    cout << "Enter deposit amount: $";
                    cin >> amount;
                    clientBalances[loggedInID] = clientBalances[loggedInID] + amount;
                    cout << "[Success] $" << amount << " deposited to your account.\n";}
                else if (atmChoice == 2) {
                    double amount;
                    cout << "Enter withdrawal amount: $";
                    cin >> amount;
                    if (amount > clientBalances[loggedInID]) {
                        cout << "[Error] Insufficient funds! Maximum withdrawal is $" << clientBalances[loggedInID] << "\n";}
                    else {
                        clientBalances[loggedInID] = clientBalances[loggedInID] - amount;
                        cout << "[Success] Dispensing $" << amount << "...\n";}}
                else if (atmChoice == 3) {
                        cout << "Current Available Balance: $" << clientBalances[loggedInID] << "\n";}} 
                while (atmChoice != 4);
                    cout << "\n[System] Account locked securely. Goodbye!\n";} 
                else {
                    cout << "\n[Error] Invalid credentials. Access Denied.\n";}}
    else if (Choice == 3) {
    viewAllAccounts(clientNames, clientBalances, totalClients);}
    else if (Choice == 4) {
        cout << "\n[System] shutdown...\n";
        saveData(clientNames, clientPasswords, clientBalances, totalClients);
        cout << "[System] Powering down.\n";}
    else {
        cout << "\n[Error] Invalid input recognized.\n";}} 
while (Choice != 4);
return 0;
}