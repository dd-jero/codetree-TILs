#include <iostream>
#include <list>
using namespace std;

int main() {
    int N,M = 0;
    string InitBread;
    char cmd, tmp;

    cin >> N >> M; // 식빵 개수, 암호문 개수
    cin >> InitBread; 

    // 리스트 초기화
    list<char> List(InitBread.begin(), InitBread.end());
    list<char>::iterator it = --List.end(); // 가리키는 위치 빵의 맨 마지막

    for(int i=0;i<M;i++){
        cin >> cmd;

        if(cmd == 'L'){

            if(it != List.begin()){
                it--;
            }
        }else if(cmd == 'R'){
            if(it != --List.end()){
                it++;
            }
        }else if(cmd == 'D'){
            if(it != --List.end()){
                List.erase(it);
            }
        }else{
            cin >> tmp;
            List.insert(it, tmp);
            it++;
        }
    }

    for(it = List.begin(); it != List.end(); it++){
        cout << *it;
    }

    return 0;
}