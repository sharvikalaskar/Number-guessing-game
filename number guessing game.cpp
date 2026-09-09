#include<iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
    srand (time(0));
    int n, lower = 1, upper = 10, attempt = 1 ;

    const int  maxAttempts = 10;
    cout << "=========================================\n";
    cout << "        NUMBER GUESSING GAME\n";
    cout << "=========================================\n";
    cout << "I'm thinking of a number between " << lower
         << " and " << upper << ".\n";
    cout << "You have " << maxAttempts << " attempts.\n";
    cout << "Enter the number: \n ";
    cin>>n;
      int num = rand() % 10 + 1;

while( attempt == 1)

     { while(num != n  && attempt < maxAttempts)
   {     if (num < n )
      {
        cout<<"Too high! Try a lower number\n";
      }
      else
      {
        cout<<"Too low! Try a higher number\n";
      }
      cout<<"Enter the number: \n";
        cin>>n;
    }
    attempt ++;
}

 cout << "You guessed correctly! The number was " << num << ".\n";
 if(attempt == 10)
 {
     cout << "Out of attempts! The number was " << num << ".\n";
 }
      return 0;
}
