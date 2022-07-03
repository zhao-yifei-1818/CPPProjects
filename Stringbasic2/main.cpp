#include <cstdint>

#include <iostream>

using namespace std;

int main() {
  string schoolName = "Chemeketa";
  //  object.action

  //    get a copy of schoolName
  string copy = schoolName;

  //    ------------------------
  //  give charactor at location 2
  //      using [index] is unsafe
  cout << schoolName.at(2) << endl;

  //  tells how long string is
  cout << schoolName.length() << endl;
  //  alternate RECOMMENDED---------
  string::size_type schoolLength = schoolName.length();
  cout << "school is " << schoolLength << " letter long" << endl;

  //  findstring
  //        if it's not found it's going to be -1
  //  but if you store it with value of -1 , the unassigned value "size_type" -- a value that should be -1 but
  //  c++ recognizes it as one giant number because it reads -1 as positive number
  //  which turns to a big wierd number.
  //  what should do:
  int location = schoolName.find("e");
  cout << location << endl;

  //  alternate RECOMMENDED---------
  //  for which you don't find it
  string::size_type xlocation = schoolName.find("x");
  if (xlocation == string::npos) {
    cout << "No x" << endl;
  }

  //    substring is few function that dont modify original string
  //    it remains what it was when substr(index, span);
  //    get part of string
  //        starting at position3, with length of 2
  //      "me"
  cout << schoolName.substr(3, 2) << endl;

  //        or from position (index) 5 all the way to end
  //      "keta"
  cout << schoolName.substr(5) << endl;

  // for fixed-width integers
  //insert characters into string
  //    insert from index 1, insert "okok"
  cout << schoolName.insert(1, "okok") << endl;

  //erase characters from string
  //    erase from index 1, erase 2 charactor
  cout << schoolName.erase(1, 2) << endl;
  //    erase everything from index 5
  cout << schoolName.erase(5) << endl;

  //add a new string by using its identifier
  //        adding it to the end of string
  string foobar = "foobar";
  cout << schoolName << endl;
  cout << schoolName.append(foobar) << endl;
    //Below is to check how many bytes those variable uses in my pc
  std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
  std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
  std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
  std::cout << '\n';
  std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
  std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
  std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

  std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
  std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
  std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
  std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n";
  std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n";
  std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
  std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
  std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
  std::cout << "long long:\t" << sizeof(long long) << " bytes\n";
  std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
  std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
  std::cout << "long double:\t" << sizeof(long double) << " bytes\n";

  return 0;
}
