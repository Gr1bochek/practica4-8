#include "doctor.h"

Doctor::Doctor() : Human(), telefon("00000"), specializing("nothing")
{

}

void Doctor::input()
{
   Human::input();
   cout<<"Enter telefon:";
   cin >> telefon;
   cout<<"Enter specializing:";
   cin >> specializing;
}

void Doctor::output()
{
    Human::output();
    cout<<"Telefon - "<<telefon<<endl;
    cout<<"Specializing - "<<specializing<<endl;
}
void Doctor::print()
{
    cout<<"I'm a doctor"<<endl;
}
