
queue<int>q;
int dist[nmax];
int visited[nmax];
vector<int>adj[nmax];

void bfs()
{
	//taking care of the source node 
	dist[1] = 0;
	visited[1] = 1;
	q.push(1);

	
	while(!q.empty())
	{
		int node = q.front();
		q.pop();
		for(auto it : adj[node])
		{
			if(visited[it]) continue;
			q.push(it);
			//increment the distance and mark the visited true
			dist[it] += 1;
			visited[it] = 1;
		}
	}

}