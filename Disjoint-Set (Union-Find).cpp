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

int main ()
{
    cin >> n >> m;
    for (int i=1; i<=n; i++) 
    {
        v[i]=i;
        size[i]=1;
    }
}
