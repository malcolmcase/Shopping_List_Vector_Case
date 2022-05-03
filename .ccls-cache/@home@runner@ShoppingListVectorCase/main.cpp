#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareFunction (string a, string b) {return a<b;}

int main()
{
vector<string> shoppingList;
string userInput = "";
string favorite;
int i = 0;

while (userInput != "end")
  {
    cout << "Add an item to your shopping list:\nIf done, enter 'end'\n";
    getline(cin, userInput);
    if (userInput != "end")
    {
    shoppingList.push_back(userInput);
    }
    system("clear");
  }

cout << "Which of these items is your favorite?\nEnter the same way entered on list:\n";
cin >> favorite;
system("clear");
  
cout << "Your shopping list:\n";

sort(shoppingList.begin(), shoppingList.end(), compareFunction);
  
for (int i = 0; i<shoppingList.size(); i++)
  {
    cout << shoppingList[i];
    if (shoppingList[i] == favorite)
    {
      cout << "*****";
    }
    cout << endl;
  }

return 0;
}