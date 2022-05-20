#pragma warning(disable: 4996)
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct _phone
{
	string start;
	string mid;
	string end;
}phone;
int compare1(phone a, phone b)
{
	if (a.start != b.start)
		return a.start < b.start;
	if (a.mid != b.mid)
		return a.mid < b.mid;
	return a.end < b.end;
}
int main()
{
	int n;
	cin >> n;
	vector<phone> p(n);
	for (auto& a : p)
		cin >> a.start >> a.mid >> a.end;
	sort(p.begin(), p.end(), compare1);
	for (auto& a : p)
		cout << a.start << ' ' << a.mid << ' ' << a.end << endl;
	return 0;
}
/*
4
011 123 4567
019 123 4567
010 1234 5678
010 2345 6789
*/