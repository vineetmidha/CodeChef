# January Cook-Off 2021
# Q-2

https://www.codechef.com/COOK126C/problems/MANYSUMS

def solve(l, r):
    return (r-l)*2+1

tc = int(input())

for _ in range(tc):
    l,r = list(map(int,input().split()))

    print(solve(l,r))
