//Adjacency list
int main ()
{
    int n, m, a, b, q;
    cin >> n >> m;
    bool v[1001][1001];
    for (int i=0; i<m; i++)
    {
        cin >> a >> b;
        v[a][b]=true;
        v[b][a]=true;
    }
    cin >> q;
    for (int i=0; i<q; i++)
    {
        cin >> a >> b;
        if (v[a][b]==true || v[b][a]==true)
            cout << "YES\n";
        else 
            cout << "NO\n";    
    }
}

//Adjacency matrix
int main ()
{
    int n, m, a, b, q;
    cin >> n >> m;
    vector <int> v[n+1];
    for (int i=0; i<m; i++)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cin >> q;
    for (int i=0; i<q; i++)
    {
        cin >> a >> b;
        bool yes=0;
        for (int j=0; j<v[a].size(); j++)
        {
            if (v[a][j]==b)
            {
                yes=1;
                cout << "YES\n";
                break;
            }
        }
        if (yes==0) cout << "NO\n";
    }
}
