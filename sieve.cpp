void sieve()
{
	//find primes using sieve of erathosthenes
	primes[0] = primes[1] = false;
	for(int i=2;i*i<=nmax;i++)
	{
		if(primes[i])
		{
			for(int j=i*i;j<=nmax;j+=i)
			{
				primes[j] = false;
			}
		}
	}
}