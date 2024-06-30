#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N,num = 0;
    string cmd;
    vector<int> v;

    cin >> N; // 명령 개수

    for(int i=0;i<N;i++){
        
        cin >> cmd;
        
        if(cmd == "push_back"){
            cin >> num;
            v.push_back(num);
        }else if(cmd == "get"){
            cin >> num;
            cout << v[num-1] << endl;
        }else if(cmd == "size"){
            cout << v.size() << endl;
        }else{
            v.pop_back();
        }
    }

    return 0;
}