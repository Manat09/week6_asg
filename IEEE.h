//
// Created by Computer on 16.10.2021.
//

#ifndef WEEK6_ASG_IEEE_H
#define WEEK6_ASG_IEEE_H
#include <iostream>
#include <string>
#include <map>
#include <list>
#include <set>
#include <vector>
using namespace std;

class IEEE {
private:
    string conferenceName;
    string conferenceLocation;
    set <string> topicsOfPresentations;
public:
    const string &getConferenceName() const;
    void setConferenceName(const string &conferenceName);
    const string &getConferenceLocation() const;
    void setConferenceLocation(const string &conferenceLocation);
    const set<string> &getTopicsOfPresentations() const;
    void setTopicsOfPresentations(const set<string> &topicsOfPresentations);
};
#endif //WEEK6_ASG_IEEE_H
