#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    typedef map<int, string> mapType;
    mapType populationMap;

    populationMap.insert(pair<int, string>(1234, "Amit XYZ"));
    populationMap.insert(pair<int, string>(2222, "Rahul"));
    populationMap.insert(pair<int, string>(3333, "Shweta"));
    populationMap.insert(pair<int, string>(4444, "Aditi"));
    populationMap.insert(pair<int, string>(9999, "Pooja"));
    populationMap.insert(pair<int, string>(7777, "Ketaki"));

    cout << "======== Student PRN Directory ==========\n";
    cout << "\nSize of populationMap: " << populationMap.size() << "\n\n";

    cout << "All Students (PRN : Name):\n";
    for (mapType::iterator iter = populationMap.begin(); iter != populationMap.end(); ++iter)
    {
        cout << iter->first << " : " << iter->second << "\n";
    }
    int PRN;
    cout << "\nEnter PRN of the student to search: ";
    cin >> PRN;
    mapType::iterator iter = populationMap.find(PRN);

    if (iter != populationMap.end())
        cout << PRN << " belongs to " << iter->second << "\n";
    else
        cout << "PRN not found in populationMap.\n";

    cout << "\nEnter PRN to erase: ";
    int erasePRN;
    cin >> erasePRN;
    if (populationMap.erase(erasePRN))
        cout << "PRN " << erasePRN << " erased successfully.\n";
    else
        cout << "PRN " << erasePRN << " not found.\n";
    cout << "\nAfter erase, remaining records:\n";
    for (map<int, string>::iterator it = populationMap.begin(); it != populationMap.end(); ++it)
    {
        cout << it->first << " : " << it->second << "\n";
    }
    cout << "\nBefore swap:\n";
    cout << "Size of populationMap: " << populationMap.size() << "\n";

    populationMap.swap(populationMap);
    cout << "\nAfter swap :\n";
    cout << "Size of populationMap: " << populationMap.size() << "\n";

    populationMap.clear();
    cout << "\nAfter clear populationMap size = " << populationMap.size() << "\n";
    return 0;
}
