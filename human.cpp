#include "human.h"

Human::Human()
    :id(0),middlename("Prizv"),name("named")
    ,lastname("lastnm"),adress("adressa")
{}

Human::Human(int id, string middlename, string name, string lastname,
             string adress)
    :id(id),middlename(middlename),name(name)
    ,lastname(lastname),adress(adress) {}

void Human::input()
{
    cout<<"Enter id:";
    cin>>id;
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter middle name:";
    cin>>middlename;
    cout<<"Enter last name:";
    cin>>lastname;
    cout<<"Enter adress:";
    cin>>adress;
}

void Human::output()
{
    cout<<"id:"<<id<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"middle name:"<<middlename<<endl;
    cout<<"last name:"<<lastname<<endl;
    cout<<"adress:"<<adress<<endl;
}
