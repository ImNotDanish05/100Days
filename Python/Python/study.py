# Program Python Dasar untuk Pemula
# Hehehehhe

# 1. Variabel dan Tipe Data
nama = "Danish"  # Tipe data string
umur = 19  # Tipe data integer
tinggi = 1.75  # Tipe data float
lajang = True  # Tipe data boolean

# Menampilkan data
print("Nama:", nama)
print("Umur:", umur)
print("Tinggi:", tinggi, "meter")
print("Lajang:", lajang)

# 2. Input dari Pengguna
# Mengambil input dari pengguna dan mengonversi ke integer
umur_kamu = int(input("Masukkan umur kamu: "))
print("Umur kamu adalah:", umur_kamu)

# 3. Pengkondisian (if-else)
if umur_kamu > umur:
    print("Wah, kamu lebih tua dari aku!")
elif umur_kamu < umur:
    print("Hihi, kamu lebih muda dari aku.")
else:
    print("Wow, kita seumuran!")

# 4. Perulangan (for loop)
print("\nMenghitung dari 1 sampai 5:")
for i in range(1, 6):  # Loop dari 1 sampai 5
    print(i)

# 5. Perulangan (while loop)
print("\nPerulangan menggunakan while:")
hitung = 0
while hitung < 3:  # Loop akan berjalan selama hitung kurang dari 3
    print("Hitungan:", hitung)
    hitung += 1  # Menambahkan 1 ke variabel hitung

# 6. Fungsi
def sapa(nama):
    """
    Fungsi untuk menyapa seseorang
    """
    print("Halo,", nama, "! Senang bertemu denganmu!")

# Memanggil fungsi
sapa("Danish Senpai~")

# 7. Menggunakan List
buah = ["apel", "mangga", "pisang", "jeruk"]  # Membuat list
print("\nDaftar Buah:", buah)

# Menambahkan elemen ke dalam list
buah.append("anggur")
print("Setelah menambahkan buah:", buah)

# 8. Looping pada List
print("\nMenampilkan buah satu per satu:")
for item in buah:
    print(item)

# 9. Dictionary
info = {
    "nama": "Danish",
    "umur": 19,
    "hobi": "Animasi dan pemrograman"
}  # Membuat dictionary
print("\nInformasi:", info)
print("Hobi Danish:", info["hobi"])  # Mengakses nilai dalam dictionary

# 10. Handling Error dengan Try-Except
try:
    hasil = 10 / 0  # Akan menghasilkan error karena pembagian dengan nol
except ZeroDivisionError:
    print("\nTerjadi kesalahan: tidak bisa membagi dengan nol!")
