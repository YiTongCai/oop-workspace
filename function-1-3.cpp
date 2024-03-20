#include <iostream>
#include "person.h"
PersonList deepCopyPersonList(PersonList pl){
    PersonList List;
    List.numPeople = pl.numPeople;
    List.people = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople ;i++){
        List.people[i].name = pl.people[i].name;
        List.people[i].age = pl.people[i].age ;
    }
    return List;
}