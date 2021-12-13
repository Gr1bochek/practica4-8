#include "patient.h"

Patient::Patient() : Human(),
  card_number("123asd"),diagnoz("diag")
{}

void Patient::input()
{
    Human::input();
    cout<<"Enter card number:";
    cin>>card_number;
    cout<<"Enter diagnoz:";
    cin>>diagnoz;
}

void Patient::output()
{
    Human::output();
    cout<<"card number:"<<card_number<<endl;
    cout<<"diagnoz:"<<diagnoz<<endl;
}
