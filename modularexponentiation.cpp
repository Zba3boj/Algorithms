int fastexpo(int a , int b)
{
	//apply binary exponentiation on it 
	int ans = 1;
	while(b > 0)
	{
		if(b & 1) ans = (ans * a) % mod;
		a = (a * a) % mod;
		b = b >> 1;
	}
	return ans;
}