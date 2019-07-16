#include "profile.hpp"
#include <iostream>

using namespace std;

Profile::Profile(string new_name, int new_age, string new_city,
                 string new_country, string new_pronouns)
    : name(new_name),
      age(new_age),
      city(new_city),
      country(new_country),
      pronouns(new_pronouns) {
}

Profile::~Profile() {
}

string Profile::view_profile() {
  string profile_info = "Name: " + name;
  profile_info += "\nAge: " + to_string(age);
  profile_info += "\nPronouns: " + pronouns;
  profile_info += "\nCity: " + city;
  profile_info += "\nCountry: " + country;
  string hobby_string = "Hobbies:\n";

  for (string hobby : hobbies) {
    hobby_string += " - " + hobby + "\n";
  }

  return profile_info + "\n" + hobby_string;
}

void Profile::add_hobby(string new_hobby) {
  hobbies.push_back(new_hobby);
}