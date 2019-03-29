// Coin Problem (form sum n using as few coins as possible)
// Start

// Let solve(x) denote the minimum number of coins required for a sum x
// coins[] = {c1, c2, c3, ...}

// Recursive formulation
int solve (int x)
{
	if (x<0) return INF;
	if (x==0) return 0;
	int best=INF;
	for (auto c:coins)
		best=min(best, solve(x-c)+1);
	return best;
}

// DP using memoization, O(nk), n: target sum, k: number of coins
bool ready[N];
int value[N];

int solve (int x)
{
	if (x<0) return INF;
	if (x==0) return 0;
	if (ready[x]) return value[x];
	int best=INF;
	for (auto c:coins)
		best=min(best, solve(x-c)+1);
	value[x]=best;
	ready[x]=true;
	return best;
}

// Iterative Implementation (Prefer)
value[0]=0;
for (int x=1; x<=n; x++)
{
	value[x]=INF;
	for (auto c:coins)
		if (x-c>=0)
		   value[x]=min(value[x], value[x-c]+1);
}

// End
