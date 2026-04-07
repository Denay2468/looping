#include <iostream>
#include <string>
using namespace std;

int main(){
    int x;
    cout<<"Loop for "<<endl;
    for (int i=0; i<4; i++){
        cout<<"Infromation Technology UMY"<<endl;

    
}
cout<<endl;

srand(time(0));

cout<<"Loop while "<<endl;
x = 1 + rand() % 10;

while (x = 5){
    cout<<"random number: "<<x<<endl;
    x = 1 + rand() % 10;
}

cout<<"the last random while number ="<<x<<endl;
cout<<endl;

cout<<"Loop do while "<<endl;
x = 1 + rand() % 10;
do {
    cout<<"random number: "<<x<<endl;
    x = 1 + rand() % 10;
} while (x <= 5);
cout<<"the last random do-while number ="<<x<<endl;
cout<<endl;