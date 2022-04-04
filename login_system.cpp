#include "logstm.h"

using namespace std;

int main()
{
    cout << "********** WELCOME TO SIMPLE LOGIN SYSTEM **********" << endl;
    cout << "\n\n" << endl;

    while(1){
        cout << "1. Press 1 to register" << endl;
        cout << "2. Press 2 to login" << endl;
        cout << "3. Press 3 to exit" << endl;

        int number;
        cout << "\n";
        cout << "Enter yours choice" << endl;
        cout << "--------------------" << endl;
        cin >> number;
        switch (number){
            case 1 : 
                if(number == 1){
                    setdata();
                }
                break;
            case 2 :
                if(number == 2){
                    getdata();
                }
                break;
            case 3 :
                if(number == 3){
                    return 0;
                }
                break;
            default :
                cout << "Enter a valid input " << endl;
                break;
        }
    } 
    return 0;
}