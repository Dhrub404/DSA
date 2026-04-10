#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){

    //unordered map creation
    unordered_map<string,int> mp;

    //insertion
    //1st way
    pair<string, int> p = make_pair("babbar", 3);
    mp.insert(p);
    //2nd way
    pair<string, int> p2 ("love", 2);
    mp.insert(p2);
    ///3rd way
    mp["mera"] = 1;
    //if we repeat this 3rd way and write again then it will update the value i.e. 1 to 2
    mp["mera"] = 2;


    //SEARCHING
    //1st way
    cout << mp["mera"] << endl;
    //2nd way
    cout << mp.at("babbar") << endl;

    //checking for unknown/not declared key using 2nd way
    //cout << mp.at("UnknownKey") << endl;    // O/P --> terminate called after throwing an instance of 'std::out_of_range'
    
    //checking for unknown/not declared key using 1st way
    cout << mp["UnknownKey"] << endl;       // the OUTPUT here will be 0 coz this using this way the map creates a new entry of key :- unknownKey with value 0

    //now if we use this way it will also give zero coz after using 1st way the entry is created so it returns the value
    cout << mp.at("UnknownKey") << endl; 


    //SIZE 
    cout << mp.size() << endl;

    // //to check presence : if the key is present or not 
    // cout << mp.count("love") << endl;   //if present return 1
    // cout << mp.count("bro") << endl;   //if absent return 0

    //erase
    mp.erase("love");
    cout << mp.size() << endl;

    //access complete map 
    // for(auto i : mp){
    //     cout << i.first << " " << i.second << endl;
    // }

    //iterator 
    //unordered_map gives random order print whereas the MAP lets the order preserved 
    unordered_map<string,int> :: iterator it = mp.begin();
    while(it != mp.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    } 


    return 0;
}