#include "song.hpp"
#include <iostream>
using namespace std;

Song::Song(string new_title, string new_artist)
    : title(new_title), artist(new_artist) {
}

Song::~Song() {
  cout << "Goodbye " << title << "!\n";
}

string Song::get_title() {
  return title;
}

string Song::get_artist() {
  return artist;
}
