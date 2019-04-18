vector <int> v[100001];
bool visited[100001];
int lvl[100001];

void bfs()
{
    queue <int> q;
    q.push(1);
    lvl[1]=1;
    visited[1]=true;
    while (!q.empty())
    {
        int p=q.front();
        q.pop();
        for (int i=0; i<v[p].size(); i++)
        {
            if (visited[v[p][i]]==false)
            {
                lvl[v[p][i]]=lvl[p]+1;
                q.push(v[p][i]);
                visited[v[p][i]]=true;
            }
        }
    }
    
}

int main ()
{
    int n, x, a, b, ans=0;
    cin >> n;
    for (int i=0; i<n-1; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs();
    cin >> x;
}
