// 24GAME.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Game of 24 give numbers add them  and equal to 24 "<<endl;
    int num;
    cout << "How many numbers  ";
    cin >> num;
    int sum=0;
    for (int i = 1; i <= num; i++) {
        cout << "Enter the numbers ";
        int n;
        cin >> n;
        sum += n;
        if (i==num&&sum == 24) {
            cout << "Your sum equal  " << "You win! " << sum << endl;
            break;
        }
        else if(i==num && sum!=24){
            cout << "Your sum equal  " << "You lose " << sum << endl;
            break;
        }
        else  {
            cout << "That cheating " << endl;
            break;

        }
    }

   
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
