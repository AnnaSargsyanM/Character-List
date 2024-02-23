//     This program asks user to input alphabetical lowercase letters,
//     and choose options between 1 and 2. Then outputs the result in the file.
//     
// 
//****************************************************************************************************


#include <iostream>
#include <fstream>
using namespace std;

int main() 

{
    char letter;
    int option;

    cout << "Enter a lowercase alphabetical letter: ";
    cin >> letter;

    cout << "Enter 1 to output characters from 'a' to " << letter << 
        ", or enter 2 to output characters from 'z' to "  << letter << 
        "." << endl;
    cin >> option;

    cout << endl;
    cout << "Output is directing to the file...";

    ofstream fout;
    fout.open("characters.txt");

    fout << "You entered the letter " << letter << " and option " << option << endl;
    fout << endl;
    fout << "The letters are: ";

    if (option == 1) 
    {
        for (char i = 'a'; i <= letter; i++)
        {
            fout << i << " ";
        }
    }
   
    else if (option == 2) 
    {
        for (char i = 'z'; i >= letter; i--)
        {
            fout << i << " ";
        }
    }

    

    return 0;
}

//****************************************************************************************************

/*
Output on the console

Enter a lowercase alphabetical letter: j
Enter 1 to output characters from 'a' to j, or enter 2 to output characters from 'z' to j.
1

Output is directing to the file...

Output on the file

You entered the letter j and option 1

The letters are: a b c d e f g h i j
*/

/*
Output on the console

Enter a lowercase alphabetical letter: k
Enter 1 to output characters from 'a' to k, or enter 2 to output characters from 'z' to k.
2

Output is directing to the file...

Output on the file

You entered the letter k and option 2

The letters are: z y x w v u t s r q p o n m l k
*/
