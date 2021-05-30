#include <iostream>
#include <math.h>
using namespace std;
#include "NrReale.h"
#include <conio.h>
#include <string.h>
int main()
{
    int opt;
    while(1)
    {
        cout<<"--OPERATII NUMERE REALE--"<<endl;
        cout<<"1)Adunare."<<endl;
        cout<<"2)Scadere."<<endl;
        cout<<"3)Inmultire."<<endl;
        cout<<"4)Impartire."<<endl;
        cout<<"Introduceti optiunea dorita:";
        cin>>opt;
        system("cls");
        switch(opt)
        {
        case 1:
        {
            NrReale ob1,ob2,ob3,ob4;
            int r;
            cout<<"Introduceti primul numar:"<<endl;
            cin>>ob1;
            cout<<"Introduceti al doilea numar:"<<endl;
            cin>>ob2;
            ob3=ob1+ob2;
            cout<<"Doriti simplificarea?(1.Y/2.N):";
            cin>>r;

            if(r==1)
            {
                ob4=ob3.reducere();
                cout<<"Rezultatul simplificat:"<<ob4;
            }
            if(r==2)
                cout<<"Rezultatul nesimplificat:"<<ob3;
            getch();
            break;
        }
        case 2:
        {
            NrReale ob1,ob2,ob3,ob4;
            int r;
            cout<<"Introduceti primul numar:"<<endl;
            cin>>ob1;
            cout<<"Introduceti al doilea numar:"<<endl;
            cin>>ob2;
            ob3=ob1-ob2;
            cout<<"Doriti simplificarea?(1.Y/2.N):";
            cin>>r;

            if(r==1)
            {
                ob4=ob3.reducere();
                cout<<"Rezultatul simplificat:"<<ob4;
            }
            if(r==2)
                cout<<"Rezultatul nesimplificat:"<<ob3;

            getch();
            break;
        }
        case 3:
        {
            NrReale ob1,ob2,ob3,ob4;
            int r;
            cout<<"Introduceti primul numar:"<<endl;
            cin>>ob1;
            cout<<"Introduceti al doilea numar:"<<endl;
            cin>>ob2;
            ob3=ob1*ob2;
            cout<<"Doriti simplificarea?(1.Y/2.N):";
            cin>>r;

            if(r==1)
            {
                ob4=ob3.reducere();
                cout<<"Rezultatul simplificat:"<<ob4;
            }
            if(r==2)
                cout<<"Rezultatul nesimplificat:"<<ob3;

            getch();
            break;
        }
        case 4:
        {
            NrReale ob1,ob2,ob3,ob4;
            int r;
            cout<<"Introduceti primul numar:"<<endl;
            cin>>ob1;
            cout<<"Introduceti al doilea numar:"<<endl;
            cin>>ob2;
            ob3=ob1/ob2;
            cout<<"Doriti simplificarea?(1.Y/2.N):";
            cin>>r;

            if(r==1)
            {
                ob4=ob3.reducere();
                cout<<"Rezultatul simplificat:"<<ob4;
            }
            if(r==2)
                cout<<"Rezultatul nesimplificat:"<<ob3;
            getch();
            break;
        }
        default:
            {
                cout<<"Optiune invalida!";
                getch();
                break;
            }

        }
    }





    return 0;
}
