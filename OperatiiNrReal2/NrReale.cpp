#include "NrReale.h"
#include <iostream>
#include <math.h>

using namespace std;

NrReale::NrReale() //constructor implicit
{
    numarator=0;
    numitor=1;

}

NrReale::~NrReale()
{
    //dtor
}

NrReale::NrReale(int _numarator,int _numitor) //constructor parametrii
{
    numarator=_numarator;
    numitor=_numitor;
}
ostream& operator <<(ostream& c,NrReale& ob)
{
    c<<ob.numarator<<"/"<<ob.numitor<<endl;
    return c;
}
istream& operator >>(istream& f,NrReale& ob)
{
    cout<<"Numaratorul: ";
    cin>>ob.numarator;
    cout<<"Numitorul: ";
    cin>>ob.numitor;
    return f;


}
NrReale  NrReale::operator +(NrReale& ob)
{
    NrReale ob3;
    if(this->numitor==ob.numitor)//verificare daca numerele au acelasi numitor
    {


    ob3.numarator=this->numarator+ob.numarator;
    ob3.numitor=this->numitor;
    return ob3;
    }
    else//aducerea numerelor la acelasi numitor
    {
        ob3.numarator=ob.numarator*this->numitor+this->numarator*ob.numitor;
        ob3.numitor=ob.numitor*this->numitor;
        return ob3;
    }

}
NrReale NrReale::reducere() //metoda simplificare
{
    NrReale ob;


    int x=cmmdc(this->numarator,this->numitor);
    if(x==0)
    {



        ob.numarator=this->numarator;
        ob.numitor=this->numitor;
        return ob;
    }
    else
    {
        ob.numarator=this->numarator/x;
        ob.numitor=this->numitor/x;
        return ob;
    }
}
int NrReale::cmmdc(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        if(b>a)
            b=b-a;
    }
    return a;
}
NrReale NrReale::operator-(NrReale& ob )
{
     NrReale ob3;
    if(this->numitor==ob.numitor)
    {


    ob3.numarator=this->numarator-ob.numarator;
    ob3.numitor=this->numitor;
    return ob3;
    }
    else
    {
        ob3.numarator=ob.numarator*this->numitor-this->numarator*ob.numitor;
        ob3.numitor=ob.numitor*this->numitor;
        return ob3;
    }
}
NrReale NrReale::operator*(NrReale& ob)
{
    NrReale ob2;
    ob2.numarator=this->numarator*ob.numarator;
    ob2.numitor=this->numitor*ob.numitor;
    return ob2;
}
NrReale NrReale::operator /(NrReale& ob)
{
    NrReale ob2;
    ob2.numarator=this->numarator*ob.numitor;
    ob2.numitor=this->numitor*ob.numarator;
    return ob2;
}
