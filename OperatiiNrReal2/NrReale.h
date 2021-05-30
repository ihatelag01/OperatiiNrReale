#ifndef NRREALE_H
#define NRREALE_H
#include <iostream>
#include <math.h>
using namespace std;

class NrReale
{
    public:
        NrReale();
        virtual ~NrReale();
        NrReale(int,int);
        friend ostream& operator <<(ostream&, NrReale& );
        friend istream& operator >>(istream&, NrReale& );
        NrReale operator +(NrReale&);
        NrReale reducere();
        int cmmdc(int,int);
        NrReale operator *(NrReale&);
        NrReale operator /(NrReale&);
        NrReale operator -(NrReale&);
    protected:



    private:
        int numarator,numitor;

};

#endif // NRREALE_H
