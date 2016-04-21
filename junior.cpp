#include <iostream>
using namespace std;

int main() {
int i;
   cout << "enter an integer" << endl;
   cin >> i;
for(int i = 0; i <= 10; ++i)
{
  if (i % 2!= 0)
        continue;
  cout << i << "\n";
}
}