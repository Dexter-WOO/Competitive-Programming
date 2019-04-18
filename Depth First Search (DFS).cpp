int ans=0;
vector <int> v[100001];
bool visited[100001];

void dfs (int x)
{
    if (visited[x]) return;
    visited[x]=true;
    ans++;
    for (int i=0; i<v[x].size(); i++)
        dfs(v[x][i]);
}

int main ()
{
    int n, m, a, b, x;
    cin >> n >> m;
    for (int i=0; i<m; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cin >> x;
    dfs(x);
    cout << ans;
}
