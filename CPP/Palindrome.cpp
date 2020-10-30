int Solution::isPalindrome(string A) {
    int i=0, j=A.size()-1;
    while(i<=j)
    {
        while(!isalpha(A[i]) && i<=j)
        {
            i++;
        }
        while(!isalpha(A[j]) && i<=j)
        {
            j--;
        }
        // cout<<i<<" "<<j;
        if(tolower(A[i])!=tolower(A[j]) && i<=j)
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
