#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#define jumlah_mahasiswa 40
using namespace std;

struct Mahasiswa
{
    string nama_lengkap, nama_populer;
    int nim;
    string minat_bakat;
    string ttl;
};

Mahasiswa mahasiswa[40];
int index_ketemu;

void load_data_mahasiswa();
void cari_berdasarkan_nama();
void cari_berdasarkan_nim();
bool cek_nama_mahasiswa(string);
string ubah_ke_huruf_kecil(string);
void output_data_mahasiswa();

int main()
{
    load_data_mahasiswa();
    int pilihan_menu;
    bool keluar = false;
    do
    {
        system("cls");
        cout << setw(30) << setfill('=') << '\n';
        cout << "SELAMAT DATANG, PILIH DARI MENU DI BAWAH" << '\n';
        cout << "1. Pencarian berdasarkan nama" << '\n';
        cout << "2. Pencarian berdasarkan NIM" << '\n';
        cout << "3. Exit" << '\n';
        cout << "Pilih menu : ";
        cin >> pilihan_menu;

        switch(pilihan_menu)
        {
            case 1:
                cari_berdasarkan_nama();
                break;
            case 2:
                cari_berdasarkan_nim();
                break;
            case 3:
                keluar = true;
                cout << "Terima kasih, program selesai.\n";
                exit(0);
                break;
            default:
                cout << "Pilihan tidak valid, silahkan ulangi!\n";
        }

        system("pause");
    } while (!keluar);
    return 0;
}

void load_data_mahasiswa()
{
    mahasiswa[0] = {
        nama_lengkap: "Muhammad Zain Aulia Firdaus",
        nama_populer: "Zain",
        nim: 121,
        minat_bakat: "Badminton, Desain Grafis",
        ttl: "Klaten, 06 April 2006"
    };

    mahasiswa[1] = {
        nama_lengkap: "Fahmi Ahmad Ramadhan",
        nama_populer: "Fahmi",
        nim: 122,
        minat_bakat: "Literasi",
        ttl: "Medan, 01 Oktober 2006"
    };
}

string ubah_ke_huruf_kecil(string input)
{
    for(auto &huruf : input)
    {
        huruf = tolower(huruf);
    }

    return input;
}

void cari_berdasarkan_nama()
{
    string nama_dicari;
    cout << "Masukkan nama yang ingin dicari: ";
    cin.ignore();
    getline(cin, nama_dicari);

    if(cek_nama_mahasiswa(nama_dicari))
    {
        cout << "\nNama " << nama_dicari << " ditemukan dengan NIM: " << mahasiswa[index_ketemu].nim << endl;
        output_data_mahasiswa();
    }
    else
    {
        cout << "\nData mahasiswa tidak ditemukan.\n";
    }
}

bool cek_nama_mahasiswa(string nama)
{
    string nama_cek = ubah_ke_huruf_kecil(nama);
    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        string nama_lengkap = ubah_ke_huruf_kecil(mahasiswa[i].nama_lengkap);
        if (nama_lengkap.find(nama_cek) != string::npos)
        {
            index_ketemu = i;   
            return true;
        }
    }
    return false;
}

void output_data_mahasiswa()
{
    cout << "Nama Lengkap                 : " << mahasiswa[index_ketemu].nama_lengkap << '\n';
    cout << "Tempat Tanggal Lahir         : " << mahasiswa[index_ketemu].ttl << '\n';
    cout << "Minat Bakat                  : " << mahasiswa[index_ketemu].minat_bakat << '\n';
}

void cari_berdasarkan_nim()
{
    int nim_cari;
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> nim_cari;
    for(int i = 0; i < jumlah_mahasiswa; i++)
    {
        if(mahasiswa[i].nim == nim_cari)
        {
            index_ketemu = i;
            cout << "NIM " << nim_cari << " ditemukan dengan nama: " << mahasiswa[index_ketemu].nama_populer << endl;
            output_data_mahasiswa();
            return;
        }
    }

    cout << "\nData mahasiswa tidak ditemukan.\n";
}