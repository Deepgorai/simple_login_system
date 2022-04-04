#include <iostream>
#include <fstream>

using namespace std;

string username, pasword;

void setdata(){
    cout << "\n";
    cout << "Enter your Username" << endl;
    cin >> username;
    cout << "Enter your pasword" << endl;
    cin >> pasword;
    ofstream out("loginsystemdata.txt", ios :: app);
    out << username << "\t";
    out << pasword << endl;
    out.close();
}

int getdata(){
    string user_name, pass;
    while (1){ 
        correct :   
            ifstream in;
            in.open("loginsystemdata.txt");
            cout << "\n";
            cout << "Enter the username" << endl;
            cin >> user_name;
            cout << "Enter the pasword" << endl;
            cin >> pass;

            while(in){
                in >> username;
                in >> pasword;
                if(user_name.compare(username) == 0){
                    if(pass.compare(pasword) == 0){
                        cout << "Login successfuly....\n" << endl;
                        return 0;
                    }
                }
            }
        cout << "Enter a valid detais" << endl;
        goto correct;
    }
}