def hitung(nilai1, nilai2):
    if nilai1 > nilai2:
        return nilai1 - nilai2
    else: return nilai2 - nilai1

def mutlak(angka):
    return abs(angka)

a, c, b, d = map(int, input().split())
hasil = hitung(a, b) + hitung(c, d)
print(mutlak(hasil))