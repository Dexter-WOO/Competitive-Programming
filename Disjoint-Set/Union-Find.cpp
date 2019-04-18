int n, m, x, y;
int v[1001], size[1001];

int root (int i)
{
    while (v[i]!=i)
    {
        v[i]=v[v[i]];
        i=v[i];
    }
    return i;
}

void wunion (int a, int b)
{
    vector <int> sizes;
    int roota=root(a);
    int rootb=root(b);
    if (roota!=rootb)
    {
        if (size[roota]<size[rootb])
        {
            v[roota]=rootb;
            size[rootb]+=size[roota];
            size[roota]=0;
        }
        else
        {
            v[rootb]=roota;
            size[roota]+=size[rootb];
            size[rootb]=0;
        }
    }
    for (int i=1; i<=n; i++)
        if (size[i]>0) 
            sizes.push_back(size[i]);
    sort(sizes.begin(), sizes.end());
    for (int i=0; i<sizes.size(); i++)
        cout << sizes[i] << " ";
    cout << "\n";
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
        cin >> x >> y;
        wunion(x,y);
    }
}
