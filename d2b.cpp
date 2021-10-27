#include <iostream>


using namespace std;

int main()
{
   int num, binaryNum = 0;
   int i = 1, rem;

   cout << "Enter any decimal number: ";
   cin >> num;

   while (num != 0)
   {
      rem = num % 2;
      num /= 2;
      binaryNum += rem * i;
      i= i*10;
   }

   cout << "Equivalent Binary Number: " << binaryNum << endl;

   return 0;
}
