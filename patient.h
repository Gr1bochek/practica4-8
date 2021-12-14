#ifndef PATIENT_H
#define PATIENT_H
#include<iostream>
#include <human.h>
using namespace std;

class Patient : public Human
{
    int id;
    string middlename;
    string name;
    string lastname;
    string adress;
    string card_number;
    string diagnoz;
public:

Patient();

void input() override;
void output() override;
void print() override;

friend ostream& operator<< (ostream &out, const Patient &patient){
        out << "id:" << patient.id << endl << "name:" << patient.name<< endl
          <<"midlle name:"<<patient.middlename<<endl
          <<"last name:"<<patient.lastname<<endl
          <<"adress:"<<patient.adress<<endl
          <<"card number:"<<patient.card_number<<endl
          <<"diagnoz:"<<patient.diagnoz<<endl;

        return out;
}
friend istream& operator>> (istream &in, Patient &patient)
{
    cout<<"Enter id:";
    in >> patient.id;
    cout<<"Enter name:";
    in >> patient.name;
    cout<<"Enter midlle name:";
    in >> patient.middlename;
    cout<<"Enter last name:";
    in >> patient.lastname;
    cout<<"Enter adress:";
    in >> patient.adress;
    cout<<"Enter card number:";
    in >> patient.card_number;
    cout<<"Enter diagnoz:";
    in >> patient.diagnoz;
        return in;
}

bool operator == (const Patient &c2)
{
    return(id==c2.id && name==c2.name && card_number==c2.card_number);
}
};
#endif // ASHNIK_H
