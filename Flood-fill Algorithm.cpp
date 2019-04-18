int n, m;
int a[11][11];

void ff (int x, int y)
{
    if (a[x][y]==0 || x<0 || y<0 || x>=n || y>=m) return;
    a[x][y]=0;
    ff (x-1,y);
    ff (x+1,y);
    ff (x,y-1);
    ff (x,y+1);
}

int main ()
{
    cin >> n >> m;
    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cin >> a[i][j]; 
    ff (0,0);
    if (a[n-1][m-1]==0) cout << "Yes";
    else cout << "No";
}
