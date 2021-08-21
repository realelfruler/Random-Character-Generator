#include <iostream>
#include <cstdlib>
#include <string>

std::string find_name() {
    srand(time(NULL));

    int name_number = std::rand() % 6;
    std::string name;

    if (name_number == 0) {
      name = "Robert";
    } else if (name_number == 1) {
      name = "Saoirse";
    } else if (name_number == 2) {
      name = "Charles";
    } else if (name_number == 3) {
      name = "Chandra";
    } else if (name_number == 4) {
      name = "Alejandro";
    } else if (name_number == 5) {
      name = "Katrina";
    }

    return name;
  }

  std::string find_species() {
    srand(time(NULL));

    int species_number = std::rand() % 6;
    std::string species;

    if (species_number == 0) {
      species = "Human";
    } else if (species_number == 1) {
      species = "Dwarf";
    } else if (species_number == 2) {
      species = "Elf";
    } else if (species_number == 3) {
      species = "Faerie";
    } else if (species_number == 4) {
      species = "Satyr";
    } else if (species_number == 5) {
      species = "Nymph";
    } else {
      species = "ERROR";
    }

    return species;
  }

  std::string find_age() {
    srand(time(NULL));

    int age;
    std::string string_age = "Immortal";
    std::string age_phrase = "Age: ";

    if (find_species() == "Human") {
      age = std::rand() % 18 + 79;
    } else if (find_species() == "Dwarf") {
      age = std::rand() % 24 + 240;
    } else if (find_species() == "Elf") {
      age = std::rand() % 100 + 750;
    } else if (find_species() == "Satyr") {
      age = std::rand() % 50 + 500;
    } else {
      age_phrase += string_age;
    }

    if (age_phrase != "Age: Immortal") {
      std::string str = std::to_string(age);
      age_phrase += str;
    }

    return age_phrase;
  }

  std::string find_class() {
    srand(time(NULL));

    int class_number = std::rand() % 12;
    std::string char_class = " ";

    if (class_number == 0) {
      char_class = "Barbarian";
    } else if (class_number == 1) {
      char_class = "Bard";
    } else if (class_number == 2) {
      char_class = "Cleric";
    } else if (class_number == 3) {
      char_class = "Druid";
    } else if (class_number == 4) {
      char_class = "Fighter";
    } else if (class_number == 5) {
      char_class = "Monk";
    } else if (class_number == 6) {
      char_class = "Paladin";
    } else if (class_number == 7) {
      char_class = "Ranger";
    } else if (class_number == 8) {
      char_class = "Rogue";
    } else if (class_number == 9) {
      char_class = "Sorcerer";
    } else if (class_number == 10) {
      char_class = "Warlock";
    } else if (class_number == 11) {
      char_class = "Wizard";
    } else {
      char_class = "ERROR";
    }

    return char_class;
  }

int main() {
  std::string yes_no = " ";

  std::cout << "Generate New Character?\n";
  std::cout << "Yes / No\n";
  std::cin >> yes_no;

  if (yes_no == "Yes" || yes_no == "yes" || yes_no == 'y' || yes_no == 'Y') {
    std::cout << "NEW CHARACTER\n";
    std::cout << "Name: " + find_name() + "\n";
    std::cout << "Species: " + find_species() + "\n";
    std::cout << find_age() + "\n";
    std::cout << "Class: " + find_class() + "\n";
  } else {
    std::cout << "Nevermind...\n";
  }
}
