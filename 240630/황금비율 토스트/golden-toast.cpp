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
    // 빵의 개수가 T개면, 레시피가 가리킬 수 있는 위치는 총 T+1 곳
    list<char>::iterator it = List.end(); 


    // iterator를 뒤로 움직이기 ++, 앞으로 움직이기 --
    for(int i=0;i<M;i++){
        cin >> cmd;

        if(cmd == 'L'){

            if(it != List.begin()){
                it--;
            }
        }else if(cmd == 'R'){
            if(it != List.end()){
                it++;
            }
        }else if(cmd == 'D'){
            if(it != List.end()){
                // erase는 it에 해당 원소 제거 후, 제거 이후 위치 반환
                it = List.erase(it);
            }
        }else{
            cin >> tmp;
            List.insert(it, tmp);
        }
    }

    for(it = List.begin(); it != List.end(); it++){
        // iterator는 포인터와 같다. 해당 주소에 담겨있는 데이터 참조
        cout << *it;
    }

    return 0;
}