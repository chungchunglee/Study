#include "2_mutating_sequence_algorithm.h"

//utility
int Increment(int n) { return n + 1; }

void _copy()
{
	vector<int> v1 = { 3,5,1,4,8,7,0,9,2,6 }, v2(10);
	
	//항상 destination에는 충분한 공간이 있어야함
	copy(v1.begin(), v1.begin() + 10, v2.begin());
	
	cout << " ** 요소들을 표준 출력 장치로 출력 **" << endl;
	copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " : "));
	cout << endl << endl;

	cout << " ** 요소들을 표준 출력 장치로 출력 version 2 **" << endl;
	ostream_iterator<int> out_iter(cout);
	copy(v2.begin(), v2.end(), out_iter);
	cout << endl << endl;

	cout << " ** 요소들을 표준 출력 장치로 역출력 version 2 **" << endl;
	copy(v2.rbegin(), v2.rend(), out_iter);
	cout << endl << endl;

}

void _transform()
{
	vector<int> v(8);

	for (int i = 0; i < v.size(); i++)
		v[i] = i + 1;

	ostream_iterator<int> out_iter(cout, " : ");
	cout << " -- 변경전 --" << endl;
	copy(v.begin(), v.end(), out_iter);

	transform(v.begin(), v.end(), v.begin(), Increment);
	cout << "-- 변경후 --" << endl;
	copy(v.begin(), v.end(), out_iter);
}
