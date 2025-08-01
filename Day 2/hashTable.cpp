#include <iostream>
#include "./hashcpp.h"
using namespace std;

int main(){
    hashTable<string,string> *obj = new hashTable<string,string>();
    string key;
     string value;
    char choice = '1';
    cout << "\n\t HashMap ";

    cout  
         << "\n#Press X for stopping program."
         << "\n#Press E for insert new key-value pair."
         << "\n#Press D for Delete a key-value pair."
         << "\n#Press S for search a key-value pair."
         << "\n#Press O for display  HashTable."
         << "\n#Press C for Clearing  HashTable."
         << "\n#Press T for Count  total HashTable.";

    while (choice != 'X')
    {
        cout << "\n\n-->>Enter your choice: ";
        cin >> choice;
        choice = toupper(choice);
        cout << "\n";
        switch (choice)
        {
        case 'E':  
            cout << "Enter a key: ";
            cin >> key;
            cout << "Enter a value: ";
            cin >> value;
            obj->insertion(key, value);
            break;
        case 'D':  
            cout << "Enter a key: ";
            cin >> key;
            obj->deletenode(key);
            break;
        case 'S':{
            cout << "Enter a key: ";
            cin >> key;
            bool isPresent = obj->searching(key);
            
            if (isPresent)
                cout << "\nNode is Prsent";
            else
                cout << "\nNot Prsent";
            break;
        }
        case 'O':
            cout << "HashTable: ";
            obj->displayHash();
            break;
        case 'C': 
            obj->clear();
            break;
        case 'T': 
            cout << "HashTable: ";
            cout << obj->total();
            break;
        case 'R':


        case 'X': 
            cout << "\n\t\tProgram Closed Successfully";
            break;
        default: 
            cout << "\n Invalid Choice ";
        }
    }
    cout << "\n";
    delete obj;

    return 0;
}
