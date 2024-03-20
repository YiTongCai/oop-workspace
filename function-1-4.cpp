#include <iostream>
#include "person.h"
extern PersonList shallowCopyPersonList(PersonList pl){
    PersonList List;
    List.numPeople = pl.numPeople;
    List.people = pl.people;
    return pl;
}