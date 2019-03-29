// Binary Search, O(log n)
// Start

int low=0, high=n-1, mid;
while (low<=high)
{
	mid=low+(high-low)/2;
	if (a[mid]<=x)
	{
		ans=mid+1;
		low=mid+1;
	}
	else
		high=mid-1;
}
cout << ans;

// End
