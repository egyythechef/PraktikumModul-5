def biodata(lahir, nama, asal):
    tahun = 2026
    umur = tahun - lahir

    print(f"Perkenalkan Nama Saya : {nama}")
    print(f"Umur Saya : {umur}")
    print(f"Saya Adalah Angkatan : {tahun}")
    print(f"Asal Saya dari : {asal}")

lahir = int(input())
nama = input().strip()
asal = input().strip()

biodata(lahir, nama, asal)