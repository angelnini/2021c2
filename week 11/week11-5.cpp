#include <vector> ///vector<???>
#include <iostream> ///cin �M cout
using namespace std;
int main()
{
    vector<int> v; ///v�Ovoctor�̸�int
    ///�@�}�lv��0��
    v.push_back(10);///��10��i�h�Av��1��
    v.push_back(11);///v2��
    v.push_back(15);///v3��

    for (int i=0; i<3; i++){
        cout << v[i] << endl;
    }
}
