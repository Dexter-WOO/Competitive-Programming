// Maximum subarray sum (Kadane's Algorithm), O(n)
// Start

int best=0, sum=0;
for (int i=0; i<n; i++)
{
	sum=max(array[i], sum+array[i]);
	best=max(best, sum);
}
cout << best;

// End
