#include <iostream>
using namespace std;
#include <iostream>
#include <fstream>
#include <unordered_map>
int main()
{
    unordered_map<string, int> map;
    ifstream fs;
    string name = "cities_map.txt";

    fs.open(name.c_str());
    string s;
    int count = 0;
    while (fs >> s)
    {
        map[s] = 1;
    }
    cout << "finished " << count << endl;
    for (auto const &pair : map)
    {
        std::cout << "case " << pair.first << ":"
                  << "\n return \"" << pair.first << "\" ;"
                  << endl;
    }
}