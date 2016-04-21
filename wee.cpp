#include <iostream>
using namespace std;

int main() {
    
int i;
   cout << "please key in an integer" << endl;
   cin >> i;
   for(int i = 0; i < 10;)
{
      cout << i++ << "\n";
}

// this code outputs 1 to 10
   for(int i = 0; i < 10;)
{
     cout << ++i << "\n";
}
}