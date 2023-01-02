///Simple write script in C++
#include <iostream>
#include <unistd.h>


using namespace std;

void write(string text)
{
  for (string::size_type j = 
    0; j < text.size(); j++) {
            cout << text[j];
            cout.flush();

            usleep(80000);
 }



}

int main() {
  string text = "your text also here.\n";
  string text2 = "your text here";

  write(text);
  write(text2); 
}
