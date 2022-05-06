#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> v; ///v是voctor裡裝int
    ///一開始v有0個
    v.push_back(10);///把10放進去，v有1個
    v.push_back(11);///v2個
    v.push_back(15);///v3個

    vector<int>::iterator it;///迭代子，相當迴圈的i
    for (it=v.begin(); it!=v.end();it++){
        cout << *it << endl;
    }
}
