#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char *argv[]) {
    int numerolineas;
    string datos,pais,data;
    map<string, int>mapa;
    map<string,int>::iterator it;
    cin>>numerolineas;
    for (int i = 0; i <numerolineas ; i++) {
        cin>>data;
        getline(cin,datos);
        pais = data.substr(0, data.find(' '));
        mapa[pais]++;
    }
    for (auto j = mapa.begin(); j != mapa.end() ; j++) {
        cout<<j->first<<" "<<j->second<<endl;
    }
    return 0;
}