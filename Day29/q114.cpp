#include<iostream>
#include<string>
using namespace std;
class aray{
    private:
    int data[1000];
    int dcount=0;
    public:
void display(){
    if (dcount == 0) {
        cout<<"\n[System] The array is completely empty.\n";}
    else{
        cout << "\n[Array Status]: [ ";
            for (int i = 0; i < dcount; i++){
                cout << data[i] << " ";}
                cout << "]\n";
                cout << "Total Elements: " << dcount << "/100\n";}
            }
void append(int value) {
        if (dcount >= 1000) {
            cout<<"\n[Error] Array Overflow! Cannot append "<< value<<".\n";}
        else{
            data[dcount] = value;
            dcount++;
            cout<<"\n[System] Successfully appended "<<value<<" to the array.\n";}}
void insertElement(int index, int value){
            if (dcount>=1000){
                cout << "\n[Error] Array Overflow! Cannot insert.\n";
                return;}
            if (index < 0 || index > dcount){
                cout << "\n[Error] Invalid index! Must be between 0 and "<<dcount<<".\n";
                return;}
            for (int i = dcount; i > index; i--) {
                data[i] = data[i - 1];}
            data[index] = value;
            dcount++;
            cout << "\n[System] Successfully inserted " << value << " at index " << index << ".\n";}
void deleteElement(int index){
            if (dcount == 0){
                cout << "\n[Error] Array is empty! Nothing to delete.\n";
                return;}
            if (index < 0 || index >= dcount){
                cout<<"\n[Error] Invalid index! Must be between 0 and "<<dcount - 1<<".\n";
                return;}
            int deletedValue = data[index];
            for (int i = index; i < dcount - 1; i++){
                data[i] = data[i + 1];}
            dcount--;
            cout << "\n[System] Successfully deleted " << deletedValue<<" from index "<<index<<".\n";}
void searchElement(int target){
            if (dcount == 0) {
                cout << "\n[Error] The array is empty. Nothing to search.\n";
                return;}
            bool found = false;
            cout << "\n[Search Results]: Element " << target << " found at index: ";
            for (int i = 0; i < dcount; i++) {
                if (data[i] == target) {
                    cout << "[" << i << "] ";
                    found = true;}}
            if (found == false) {
                cout << "None! (Element does not exist)\n";}}
};
int main(){
    aray opt;
    int choice;
    do{
        cout<<"\n\t\t============Array Operations===========";
        cout<<"\n1. Display Array";
        cout<<"\n2. Append Element (Add to the very end)";
        cout<<"\n3. Insert Element at Specific Position (The Right-Shift)";
        cout<<"\n4. Delete Element at Specific Position (The Left-Shift)";
        cout<<"\n5. Search for an Element";
        cout<<"\n6. Exit";
        cout<<"\n==>";
        cin>>choice;
        if(choice==1){
            opt.display();
        }
        else if(choice==2){
            int value;
            cout<<"Enter the value to add at end: ";
            cin>>value;
            opt.append(value);
        }
        else if(choice==3){
            int value;
            int index;
            cout<<"Enter the element to be added: ";
            cin>>value;
            cout<<"Enter the index to add it: ";
            cin>>index;
            opt.insertElement(index,value);
        }
        else if(choice==4){
            int index;
            cout<<"Enter the index of it: ";
            cin>>index;
            opt.deleteElement(index);
        }
        else if(choice==5){
            int value;
            cout<<"Enter the element: ";
            cin>>value;
            opt.searchElement(value);
        }
        else if(choice==6){
            cout<<"========CLOSING========";
            return 0;
        }
        else{cout<<"Invalid input!!";}
    }
while(choice!=6);
return 0;
}