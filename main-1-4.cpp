#include <iostream>
#include "Person.h"
extern PersonList shallowCopyPersonList(PersonList pl);

int main(){
    PersonList InitialList;
    InitialList.numPeople = 2;
    InitialList.people = new Person[InitialList.numPeople];
    for (int i = 0; i < InitialList.numPeople; ++i){
       InitialList.people[i].name = "John Doe";
       InitialList.people[i].age = 2;

    }
    PersonList newList = shallowCopyPersonList(InitialList);

    newList.people[0].name = "Iris";
    newList.people[0].age = 19;

    for (int i = 0; i < InitialList.numPeople; ++i){
        std::cout << "InitialName : " << InitialList.people[i].name << "InitialAge : " << InitialList.people[i].age << std::endl;
    }

    for (int i = 0; i < newList.numPeople; ++i){
        std::cout << "NewName : " << newList.people[i].name << "NewAge : " << newList.people[i].age << std::endl;
    }

    delete [] InitialList.people;
    delete [] newList.people;
    return 0;
}