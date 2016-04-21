#include <iostream>
using namespace std;

int main() {
int i = 1;
    cout << "Please key in an integer" << endl;
    cin >> i;

while(true)
{
   if(i > 10)
      break;
   cout << i << "\n";
   ++i;
}

  return 0;
}