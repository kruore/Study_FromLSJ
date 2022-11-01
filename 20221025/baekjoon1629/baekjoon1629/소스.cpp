#define collection cin.tie(NULL); ios_base::sync_with_stdio(false);
#include <iostream>
#include <vector>

using namespace std;
long long a,b,c;
long long Solution(long long b);
long long answer;
void Init();
int main()
{
	Init();
}
long long Solution(long long b)
{
	if (b == 0)return 1;
	if (b == 1)return a % c;

	answer = Solution(b / 2) % c;
	if (b % 2 == 0)return answer * answer % c;
	return answer * answer % c * a % c;
}
void Init()
{
	collection;
	cin >> a >> b >> c;
	cout << Solution(b);

}