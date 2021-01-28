void sort012(int a[], int n)
{
    int i=0,j=n-1,k=0;
    while(k<=j)
    {
        
        if(a[k]==0)
        {
            swap(a[i++],a[k++]);
        }
        else if(a[k]==2)
        {
            swap(a[j--],a[k]);
        }
        else
        {
            k++;
        }
    }
}
