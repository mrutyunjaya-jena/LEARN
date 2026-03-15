#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

    map<int, string> map1;

    map1 = {{1, "sun"}, {2, "mon"}, {3, "tue"}, {4, "wed"}, {5, "thu"}, {6, "fri"}, {7, "sat"}};

    map1[8] = "holiday";

    for(const auto& pair : map1){
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}