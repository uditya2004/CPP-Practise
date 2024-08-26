#include <iostream>
#include <map>

using namespace std;

//// Displaying the phonebook
void Display(map<string,string> &phonebook){
    for (const auto &entry : phonebook) {
        cout << entry.first << ": " << entry.second <<endl;
    }
}


int main() {
    map<string, string> phonebook;

    // Adding entries to the phonebook
    phonebook["Alice"] = "123-4567";
    phonebook["Bob"] = "987-6543";
    phonebook["Charlie"] = "555-7890";

    // Accessing a phone number
    cout << "Alice's number: " << phonebook["Alice"] << endl;

    //Modify element
    phonebook["Bob"] = "999-999";

    Display(phonebook);

    //size of the map
    cout<<"size: "<<phonebook.size()<<endl;

    return 0;
}
