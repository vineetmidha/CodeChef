# Cook-Off January 2021
# Q-3

https://www.codechef.com/COOK126C/problems/PTUPLES

# Result: TLE

def sieve(n):
    primes = [True for i in range(n+1)]
    
    for p in range(2,int(pow(n,0.5))+1):
        if primes[p]:
            for i in range(2*p, len(primes), p):
                primes[i] = False

    return primes

def solve(n):
    if n < 5: return 0
    
    primes = sieve(n)

    a=2
    
    ans = 0
    
    for b in range(3,n+1):
        if primes[b]:
            c = a + b
            if c < n+1 and primes[c]:
                ans += 1

    return ans

tc = int(input())

for _ in range(tc):
    n = int(input())
    
    print(solve(n))
