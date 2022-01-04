#include <iostream>

using namespace std;

#define MAX_NAME_LEN 60  // Maximum len of your name can't be more than 60

//function to return name
string getname(string name);




int main()
{
    cout << "please enter your name: " << endl;
    char your_name[MAX_NAME_LEN];
    cin.getline(your_name, MAX_NAME_LEN);
    
    cout << "Hello " << getname(your_name) << endl;
   
}



//function to return name
string getname(string name)
{
    string names = name;
    return names;
}
