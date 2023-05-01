#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
using namespace std;
int n, x, y, New_Map[1001][1001], g, S_Number[100001];
long int m;
char Map[1001][1001];
void Sunc(int x, int y, int current, int sum)
{
	if (x < 0 || x >= n || y< 0 || y >= n || New_Map[x][y] != (-1) || Map[x][y] - '0' != current)
		return;
	
	
	New_Map[x][y] = sum; 
	S_Number[sum]++; 

	Sunc(x - 1, y, !current, sum); 
	Sunc(x + 1, y, !current, sum);
	Sunc(x, y - 1, !current, sum);
	Sunc(x, y + 1, !current, sum);
}
int main()
{

	memset(New_Map, -1, sizeof(New_Map));  
	cin >> n >> m;
	long int i = 0;
	for (i = 0; i <= n - 1; i++)
		for (int j = 0; j <= n - 1; j++)
			cin >> Map[i][j];
	for ( i = 0; i <= m - 1; i++)
	{
		cin >> x >> y;
		x--; y--;
		if (New_Map[x][y] == -1)
			Sunc(x, y, Map[x][y] - '0', i);
		else
			S_Number[i] = S_Number[New_Map[x][y]];	 
		cout << S_Number[i] << endl;
	}

	return 0;
}

