#include <iostream>

using namespace std;

int main(){
    cout << "性を入力:";
    string s;
    cin >> s;
    cout << "名を入力:";
    string t;
    cin >> t;
    cout << "名前は「" << s+t << "」です。" << endl;
}