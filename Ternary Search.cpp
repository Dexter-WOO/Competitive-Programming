double func (double x)
{
    return 2*x*x - 12*x + 7;
}

int main ()
{
    double n,l,r;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> l >> r;
        for(int i=0; i<200; i++) 
        {
            double l1 = l+(r-l)/3;
            double l2 = r-(r-l)/3;
            if(func(l1) > func(l2)) 
                l = l1; 
            else 
                r = l2;
        }
        double x=l;
        cout << (long long)floor(func(x)) << "\n";
    }
}
