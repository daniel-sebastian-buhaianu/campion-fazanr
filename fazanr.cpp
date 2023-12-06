#include <fstream>
using namespace std;
int main()
{
	ifstream f("fazanr.in");
	int n, x;
	f >> n >> x;
	int nr = 0;
	while (n > 1)
	{
		int y;
		f >> y;
		int pc = y;
		while (pc > 9) pc /= 10;
		if (x%10 != pc) nr++;
		x = y;
		n--;
	}
	f.close();
	ofstream g("fazanr.out");
	g << nr;
	g.close();
	return 0;
}

