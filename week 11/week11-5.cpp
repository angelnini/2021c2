#include <vector> ///vector<???>
#include <iostream> ///cin 和 cout
using namespace std;
int main()
{
    vector<int> v; ///v是voctor裡裝int
    ///一開始v有0個
    v.push_back(10);///把10放進去，v有1個
    v.push_back(11);///v2個
    v.push_back(15);///v3個

    for (int i=0; i<3; i++){
        cout << v[i] << endl;
    }
}
