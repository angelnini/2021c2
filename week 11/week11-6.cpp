#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v; ///v�Ovoctor�̸�int
    ///�@�}�lv��0��
    v.push_back(10);///��10��i�h�Av��1��
    v.push_back(11);///v2��
    v.push_back(15);///v3��

    vector<int>::iterator it;///���N�l�A�۷�j�骺i
    for (it=v.begin(); it!=v.end();it++){
        cout << *it << endl;
    }
}
