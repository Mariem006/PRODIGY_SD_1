#include <iostream>
#include <limits>

using namespace std;

int main()
{
    float value,fahr,cel,kel;
    char unit;
    cout<<"Enter the temperature value you want to convert: "<<endl;
    cin>>value;
    cin.ignore();
    while(cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Please enter only a number"<<endl;
        cin>>value;
        cin.ignore();
    }
    do{
        cout<<endl<<"Choose the unit of the the value from the list (a, b or c)"<<endl;
        cout<<"a. Celsius"<<endl;
        cout<<"b. Fahrenheit"<<endl;
        cout<<"c. Kelvin"<<endl;
        cout<<"unit: ";
        cin>>unit;
        cin.ignore();
        unit= tolower(unit);
        switch(unit){
            case 'a':{
                fahr= (value*(9.0/5))+ 32;
                kel= value + 273.15;
                cout<<value<<" degrees Celsius is "<<fahr<<" Fahrenheit after conversion"<<endl;
                cout<<value<<" degrees Celsius is "<<kel<<" Kelvin after conversion"<<endl;
                break;
            }
            case 'b':{
                cel=(value - 32)* (5.0/9);
                kel=((value- 32)*(5.0/9))+ 273.15;
                cout<<value<<" Fahrenheit is "<<cel<<" degree celsius after conversion"<<endl;
                cout<<value<<" Fahrenheit is "<<kel<<" Kelvin after conversion"<<endl;
                break;

            }
            case 'c':{
                cel= value - 273.15;
                fahr=((value -273.15)*1.8) + 32;
                cout<<value<<" Kelvin is "<<cel<<" degree celsius after conversion"<<endl;
                cout<<value<<" Kelvin is "<<fahr<<" Fahrenheit after conversion"<<endl;
                break;

            }
            default:{
                cout<<"Enter only a, b or c"<<endl;
                break;
            }
        }
    }while(unit!='a' && unit!='b' && unit!='c');

    cout<<"See you later!"<<endl;

    return 0;
}
