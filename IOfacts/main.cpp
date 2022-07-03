#include <iostream>
#include <cmath>
#include <string>
using namespace std;
        string get_word() {
          //    read one word and that it
          string city;
          cout << "input one word city: " << endl;
          cin >> city;
          cout << "City is : " << city << endl;
          return city;
        }

        string get_sentence() {
          //    get line is how you get whole sentense of input instead of one single word
          string city;
          cout << "input one sentence city: " << endl;
          //    getline(cin, //where);
          getline(cin, city);
          cout << "City is : " << city << endl;
          return city;
        }


        string getline_override() {
          //    read until we see delimiter not newline
          //    delimiter means that thing in single quote which is a char semicolomn
          string city;
          cout << "input override city, whenever you are done with last line of input just use ';' attached to the end of your inputs and hit enter" << endl;
          getline(cin, city, ';');
          cout << "City is: " << city << endl;
          return city;
        }

        void Furthermore(string words) {
          cout << "Furthermore dont string variable + Number value" << endl;
          cout << "And dont String literal + Number value, its bad" << endl;
          cout << words << endl;
        }

        string ConvertNumbertoString(int number) {
          //    furthermore stod:string to double
          //    furthermore stoi:string to int

          string price = "$";
          //    basically, to_string(//your identifier or value) is the one that does job)
          price = price + to_string(number);
          return price;
        }
        void seeIfItsEmail(string mystring) {
          string::size_type index = mystring.find("@");
          if (index != string::npos) {
            cout << "email address" << endl;
          } else {
            cout << "Not email address" << endl;
          }

        }

        void ReplaceOneLetter(string mystring) {
          string::size_type index = mystring.find("@");
          //    this command replace 1 charactor at index
          mystring.at(index) = '#';
//            print it out
          cout << mystring << "\t--after edit" << endl;
        }

        //Use substr to grab parts
        void GrabParts(string mystring) {
            string::size_type index = mystring.find("@");
            if (index != string::npos){
                //front is from 0 and has number chars
                //Equal to location we found @
                string front = mystring.substr(0, index);
                //reat starts at location 1 after @
                //All the way to the end
                string rear = mystring.substr(index + 1);
                cout << front << endl;
                cout << rear << endl;
            }

        }
        void ReplaceMultiple(string mystring) {
          string::size_type index = mystring.find("@");
          //    replace 1 character starting at index with string "###"
          mystring.replace(index, 1, "###");
          cout << "Mystring: " << mystring << endl;
        }

//int get_Userinput(int count)
//{
//    cout << "Enter x y for point " << count << " (Seperate 2 integer with space)" << endl;
//    string userinput;
//    getline(cin, userinput);
//    int userInt = std::stoi(userinput);
//    cout << "That's " << userInt << endl;
//    return userInt;

//}
//int counting(int count)
//{
//    count += 1;
//    return count;
//}
//int get_s(int a, int b, int c)
//{
//    int s = (a + b + c)/2;
//    return s;
//}

//int calculation(int a, int b, int c, int s)
//{
//    int A = sqrt(s*(s-a)*(s-b)*(s-c));
//    return A;
//}
//void PrintFinalPrompt(int answer)
//{
//    cout << "The area of the triangle is " << answer << endl;

//}
int main() {
//    int count = 1;

//    int a = {get_Userinput(count)};
//    count = counting(count);
//    int b = {get_Userinput(count)};
//    count = counting(count);
//    int c = {get_Userinput(count)};
//    int s = {get_s(a, b, c)};

//    int answer = {calculation(a,b,c,s)};
//    PrintFinalPrompt(answer);


          string city {
            get_sentence()
          };
          string oneWordCity {
            get_word()
          };
          string overrideCity {
            getline_override()
          };
          string price_string {
            ConvertNumbertoString(100)
          };

          Furthermore(price_string);

          string mystring = "bobba@a.com";
          seeIfItsEmail(mystring);
          ReplaceOneLetter(mystring);
          ReplaceMultiple(mystring);
          GrabParts(mystring);

  return 0;
}
