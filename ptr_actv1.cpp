#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string username;
    int age;
    int *age_ptr;
    age_ptr=&age;
    
    cout << "What is your name :" ;
    
    getline(cin,username);
    cout << "What is your age :" ;
    cin >> age;
    
    cout << username <<age << endl;
    cout << "\n";
    age=15;
    
    cout << username <<*age_ptr << endl;

}
