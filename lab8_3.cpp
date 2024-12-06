/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

#include<iostream>
#include<string>

using namespace std;



int main()
{
    string name;
    int age, h, b;

    cout << "Enter your age: ";
    cin >> age;
    if(age > 25){
        if (age <= 60){
            cout << "Enter your bounty: ";  
            cin >> b; 
            if(b > 500*1000000){
                cout << "Your character = Jinbe";
            }else{
                cout << "Your character = Franky";
            }
        }else{
            cout << "Your character = Brook";
        }
    }else{
        cout << "Enter your height: ";
        cin >> h;
        if(h < 100){
            cout << "Your character = Chopper";
        }else if(h < 180){
            cout << "Your character = Usopp";
        }else{
            cout << "Enter your bounty: ";  
            cin >> b; 
            if(b <= 1100000000){
                cout << "Your character = Sanji";
            }else{
                cout << "Your character = Zoro";
            }
        }
    }
    return 0;
}