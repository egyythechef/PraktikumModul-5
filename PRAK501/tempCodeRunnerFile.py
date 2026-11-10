def Besar(a, b, c, d):
    return max(a, b, c, d)

a, b, c, d = map(int, input().split())
hasil = Besar(a, b, c, d)
print(hasil)