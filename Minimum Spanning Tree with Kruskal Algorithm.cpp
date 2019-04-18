int n, m, a, b, w;
pair <int, pair <int, int>> p[100001];
int v[10001], size[10001];

int root(int i)
{
    while (v[i]!=i)
    {
        v[i]=v[v[i]];
        i=v[i];
    }
    return i;
}

void wunion(int a, int b)
{
    int roota=root(a);
    int rootb=root(b);
    if (roota!=rootb)
    {
        if (size[roota]<size[rootb])
        {
            v[roota]=rootb;
            size[rootb]+=size[roota];
        }
        else 
        {
            v[rootb]=roota;
            size[roota]+=size[rootb];
        }
    }
}

int kruskal ()
{
    int x, y, cost, mincost=0;
    for (int i=0; i<m; i++)
    {
        x=p[i].second.first;
        y=p[i].second.second;
        cost=p[i].first;
        if (root(x)!=root(y))
        {
            mincost+=cost;
            wunion(x, y);
        }
    }
    return mincost;
}

int main ()
{
    cin >> n >> m;
    for (int i=1; i<=n; i++)
    {
        v[i]=i;
        size[i]=1;
    }
    for (int i=0; i<m; i++)
    {
        cin >> a >> b >> w;
        p[i]=make_pair(w, make_pair(a, b));
    }
    sort(p, p+m);
    int mincost=kruskal();
    cout << mincost;
}
