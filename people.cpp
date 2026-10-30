#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> orang = {"budi", "siti"};
    orang.insert(orang.begin(), "roni");
    orang.push_back("dewi");
    orang.erase(orang.begin());

    cout << "hasil akhir: ";
    for (string item : orang) {
        cout << item << " ";
    }
    cout << endl;

    return 0;

}


    

   