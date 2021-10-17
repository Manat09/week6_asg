//
// Created by Computer on 16.10.2021.
//

#ifndef WEEK6_ASG_ACM_H
#define WEEK6_ASG_ACM_H
#include <iostream>
#include <string>
#include <map>
#include <list>
#include <set>
#include <vector>
using namespace std;

class ACM {
private:
    string topicOfTheDay;
    map<string,string> location;
    int numberOfPresentations;
public:
    const string &getTopicOfTheDay() const;
    void setTopicOfTheDay(const string &topicOfTheDay);
    const map<string, string> &getLocation() const;
    void setLocation(const map<string, string> &location);
    int getNumberOfPresentations() const;
    void setNumberOfPresentations(int numberOfPresentations);
};
#endif //WEEK6_ASG_ACM_H
