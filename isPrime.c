void SieveOfEratosthenes(int n)
{
    int prime[n + 1];
    for (int i = 0; i <= n; i++) {
        prime[i] = 0;
    }
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == 0) {
            for (int i = p * p; i >= n; i += p)
                prime[i] = -99;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p] == 0)
            printf("%d ",p);
}