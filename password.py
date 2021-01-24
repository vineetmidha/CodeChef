# January Cookoff 2021

https://www.codechef.com/COOK126C/problems/PASSWD

def isValid(pwd):
    if len(pwd) < 10: return "NO"

    rules = [False,False,False,False]

    for i in range(len(pwd)):
        if pwd[i].islower():
            rules[0] = True
        elif i > 0 and i < len(pwd)-1:
            if pwd[i].isupper():
                rules[1] = True
            elif pwd[i].isdigit():
                rules[2] = True
            elif pwd[i] in "@#%&?":
                rules[3] = True

    result = True

    for i in rules:
        result = result and i

    return "YES" if result else "NO"

tc = int(input())

for _ in range(tc):
    pwd = input()
    
    print(isValid(pwd))        
tc = int(input())

for _ in range(tc):
    pwd = input()
    
    print(isValid(pwd))
