#include "Graph.h"
#include <iostream>

void Graph::addPerson(Person* person) 
{
    people.push_back(person);
}

void Graph::addFriendship(Person* person1, Person* person2) 
{
    person1->addFriend(person2);
    person2->addFriend(person1);
}

void Graph::findFriendsOfFriendsWithinDepth(Person* person, int depth, std::unordered_set<Person*>& friendsSet) 
{
    if (depth == 0) return;
    for (Person* friendPtr : person->friends) 
    {
        friendsSet.insert(friendPtr);
        findFriendsOfFriendsWithinDepth(friendPtr, depth - 1, friendsSet);
    }
}

void Graph::findPairsWithinDepth(int depth) 
{
    for (Person* person : people) 
    {
        std::unordered_set<Person*> friendsSet;
        findFriendsOfFriendsWithinDepth(person, depth, friendsSet);
        for (Person* friendPtr : people) 
        {
            if (friendPtr != person && friendsSet.find(friendPtr) != friendsSet.end()) 
            {
                std::cout << person->name << " and " << friendPtr->name << " are within " << depth << " handshakes." << std::endl;
            }
        }
    }
}