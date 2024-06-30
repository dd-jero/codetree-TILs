#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    int N, num = 0; // 명령어 수
    string cmd;
    list<int> list;

    cin >> N;

    for(int i=0; i<N;i++){
        cin >> cmd;

        if(cmd == "push_front"){
            cin >> num;
            list.push_front(num);

        }else if(cmd == "push_back"){
            cin >> num;
            list.push_back(num);

        }else if(cmd == "pop_front"){
            // pop_front() 호출 시 삭제만 할 뿐 반환 X
            cout << list.front() << endl;
            list.pop_front();
            
        }else if(cmd == "pop_back"){
            // pop_back() 호출 시 삭제만 할 뿐 반환 X
            cout << list.back() << endl;
            list.pop_back();
            
        }else if(cmd == "size"){
            cout << list.size() << endl;

        }else if(cmd == "empty"){
            // 삼항연산자 괄호 필수!!
            cout << (list.empty() ? 1 : 0) << endl;

        }else if(cmd == "front"){
            cout << list.front() << endl;

        }else if(cmd == "back"){
            cout << list.back() << endl;
        }
    }

    return 0;
}