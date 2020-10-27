#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int max = 0, w, t, cum1 = 0, cum2 = 0;
	cin >> t;
	while (t--)
	{
		int score1, score2;
		cin >> score1 >> score2;

		cum1 += score1;
		cum2 += score2;

		if (max < abs(cum1 - cum2))
		{
			if (cum1 > cum2)
			{
				max = cum1 - cum2;
				w = 1;
			}
			else
			{
				max = cum2 - cum1;
				w = 2;
			}
		}
	}
	cout << w << " " << max;
	return 0;
}
