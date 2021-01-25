# Cook-Off January 2021
# Q-3 - Originally got TLE. Upsolved. 

Ques: https://www.codechef.com/COOK126C/problems/PTUPLES
Ans: https://www.youtube.com/watch?v=qpC2KAFCGmY&list=PLQXZIFwMtjowv0cQH4zJmcm3sIz5rGEJi&index=3

'''
1. Make a global sieve
2. Make a global answer list and precompute answers for all the values of N.
3. Then, for each test case, result will come in O(1) time.
'''

def makeSieve():
    for p in range(2,int(pow(size,0.5))+1):
        if primes[p]:
            for i in range(2*p, len(primes), p):
                primes[i] = False

def generateAnswer():
    cnt = 0
    for c in range(5,size):
        if primes[c] and primes[c-2]:
            cnt += 1
        ans[c] = cnt

size = 1000001
primes = [True for i in range(size)]
ans = [0]*size

makeSieve()
generateAnswer()

tc = int(input())

for _ in range(tc):
    n = int(input())
    
    print(ans[n])
