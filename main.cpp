#include <iostream>
#include <string>
using namespace std;

struct timeOfDay{
  short Hour;
  short Minute;
  short Second;
};

struct appDate{
  short dayOfMonth;
  short month;
  int year;
};

struct event{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
};

event* init_event(){
  event* temp = new event;
  temp->eventName = "My Birthday!";
  temp->isUrgent = true;
  temp->eventTime.Hour = 12;
  temp->eventTime.Minute = 35;
  temp->eventTime.Second = 26;
  temp->eventDate.dayOfMonth = 20;
  temp->eventDate.month = 4;
  temp->eventDate.year = 2020;
  return temp;
}

//task 2 program 2

int display_eventTime(timeOfDay b){
  cout << "Time: " << b.Hour << ":" << b.Minute << ":" << b.Second << endl;
  return 0;
}

int display_appDate(appDate b){
  cout << "Date: " << b.dayOfMonth << "-" << b.month << "-" << b.year << endl;
  return 0;
}

int display_event (event *a){
  cout << "Event Name: " << a->eventName << endl;
  if(a->isUrgent == true){
    cout << "Important? Very important!!!" << '\n';
  } else {
    cout << "Imprtant? Not really..." << '\n';
  }
  display_appDate(a->eventDate);
  display_eventTime(a->eventTime);
  return 0;
}

int main(){
  event * event1 = init_event();
  display_event(event1);
  return 0;
}