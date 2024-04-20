#include "Person.h"
Person::Person(std::string n) : name(n) {}

void Person::addFriend(Person* friendPtr) 
{
    friends.push_back(friendPtr);
}