#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> listFromString(string);
int main()
{
    string input;
    vector <string> inventory;

    cout<<"What's in the store (separate items by commas)? ";
    getline(cin,input);

    inventory = listFromString(input); //TODO: Write this function!

    cout<<inventory.size()<<" items in inventory.\n";
    for(int i=0; i<inventory.size(); i++)
    {
        cout<<inventory.at(i)<<endl;
    }

    return 0;
}
vector<string> listFromString(string input)
{
    vector<string> list;
    string word = "";
    int numWords = 0;
    for(int index = 0; index<input.length(); index++)
    {
        if(input[index] == ',')
        {
            numWords++;
        }
    }

    for(int index = 0; index<numWords+1; index++)
    {
        word = input.substr(0, input.find(","));
        input.erase(0, word.length()+1);    
        //index += word.length();
        list.push_back(word);
    }
    return list;

}
           
