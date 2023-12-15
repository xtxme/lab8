#include<iostream>
#include<string>
using namespace std;

int main()
{
    int age, height, bounty;
    cout << "Enter your age: ";
    cin >> age;

    if (age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;
        if (height < 100)
        {
            cout << "character = " << "Chopper";
        }else{
            if (height < 180)
            {
                cout << "character = " << "Usopp";
            }else{
                cout << "Enter your bounty: ";
                cin >> bounty;
                if (bounty > 1100000000)
                {
                    cout << "character = " << "Zoro";
                }else{
                    cout << "character = " << "Sanji";
                }
                
            }
            
        }
        
    }else if (age <= 60)
    {
        cout << "Enter your bounty: ";
        cin >> bounty;
        if ( bounty > 500000000)
        {
            cout << "character = " << "Jinbe";
        }else{
            cout << "character = " << "Franky";
        }
        
    }else{
        cout << "character = " << "Brook";
    }
    
    
    

    
}
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
