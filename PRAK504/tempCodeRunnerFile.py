def balik(n):
    rev = 0
    while n > 0:
        rev = rev * 10 + (n % 10)
        n //= 10
    return rev

a, b = map(int, input().split())
a = balik(a)
b = balik(b)

c = a + b
print(balik(c))