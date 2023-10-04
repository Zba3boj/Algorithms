findFactors()
{
	int n;
	cin >> n;
	vector<int>vec;
	//key idea is that factors are in pairs 
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n % i == 0)
		{
			if(n / i == i) vec.push_back(i);
			else 
			{
				vec.push_back(i);
				vec.push_back(n / i);
			}
		}
	}
}