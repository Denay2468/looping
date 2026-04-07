#include <iostream>
using namespace std;

int main(){
    float ScoreA,ScoreB,Avarage;
    string status;

    cout<<"Enter Indonesian Language Score : ";
    cin>>ScoreB;
    
    cout<<"Enter English Score : ";
    cin>>ScoreA;

    Avarage = (ScoreA + ScoreB) / 2;

    if (!(Avarage <60)){

        status = "Passed";

    } else {

        status = "Failed";
    }

    cout<<"Status: "<<status<<"with an average score of "<<Avarage<<endl;


}