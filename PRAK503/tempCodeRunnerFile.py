def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b


N = int(input())
bilangan_list = list(map(int, input().split()))
maks = -100000
minim = 100000

for nilai in bilangan_list:
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)

print(f"{maks} {minim}")