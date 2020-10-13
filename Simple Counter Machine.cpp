//B. Create a simple cashier program.
#include <iostream>
using namespace std;

int main(){

    int prod,num,n;

        cout << "______________MANCIA FARM'S_____________\n\n"<<endl;
        cout << "\t  VEGETABLES\t||\t₱Price  "<< endl;
        cout << "                            "<< endl;
        cout << "1\tCarrots\t||\t₱80   "<< endl;
        cout << "2\tCabbage\t||\t₱50   "<< endl;
        cout << "3\tPotatoes\t||\t₱90  "<< endl;
        cout << "4\tTomatoes\t||\t₱85  "<< endl;
        cout << "                             "<< endl;
        cout << "__________________________________________\n\n";

        cout << endl<< "Enter Number: ";
        cin >> num;
        switch (num){
            case 1:
            cout << "\nEnter Payment: ";
            cin >> n; 
            if (n>=80){
                prod=n-80;
                cout << "\nChange:₱ "<<prod<<endl;
            }
            else
                cout << "\nInvalid Payment"<<endl;
                break;
            case 2:
            cout << "\nEnter Payment: ";
            cin >> n; 
            if (n>=50){
                prod=n-50;
                cout << "\nChange:₱ "<<prod<<endl;
            }
            else
                cout << "\nInvalid Payment"<<endl;
                break;
            case 3:
            cout << "\nEnter Payment: ";
            cin >> n; 
            if (n>=90){
                prod=n-90;
                cout << "\nChange:₱ "<<prod<<endl;
            }
            else
                cout << "\nInvalid Payment"<<endl;
                break;
            case 4:
            cout << "\nEnter Payment: ";
            cin >> n; 
            if (n>=85){
                prod=n-85;
                cout << "\nChange:₱ "<<prod<<endl;
            }
            else
                cout << "\nInvalid Payment"<<endl;
                break;
            }
       cout << "\n\nPROGRAMMED BY: MANCIA, MARK ANTHONY";
    return 0;
}