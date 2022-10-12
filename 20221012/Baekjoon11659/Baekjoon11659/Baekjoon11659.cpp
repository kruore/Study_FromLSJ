// 수 N개가 주어졌을 때, i번째 수부터 j번째 수까지 합을 구하는 프로그램을 작성하시오.
#define MAX_DATA 100001
#include <vector>
#include <iostream>

using namespace std;

int _length;
int slot_count;
int datas[MAX_DATA];
vector<long> answer;
void Init();
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    Init();

}
void Init()
{
    cin >> _length >> slot_count;
    datas[0] = 0;
    for (int i = 1; i <= _length; i++)
    {
        long data;
        cin >>data;
        datas[i] = datas[i-1] + data;
    }
    for (int i = 0; i < slot_count; i++)
    {
        int minimam, maximum;
        cin >> minimam >> maximum;
        answer.push_back(datas[maximum] - datas[minimam-1]);
    }
    for (int i = 0; i < answer.size(); i++)
    {
        cout<<answer[i]<<"\n";
    }
}
