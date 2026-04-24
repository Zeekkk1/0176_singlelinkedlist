#include <iostream>
using namespace std;

class node
{
public :
   int nomhs;
   node *next;
};

class LinkedList
{
    Node *START;


    public:
    LinkedList(){
        START = NULL;
    }

    void addnode()
    {
        int nim;
        cout << "n\Masukan Nomor Mahasiswa : ";
        cin >> nim;
        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nimm

    }

    if (START == NULL || nim <= START->noMhs)
    {
        if ((START != NULL) && (nim == START->noMhs))
        {
            cout << "/nDuplikasi noMhs tidak diijinkan\n";
            return;
        }

        nodeBaru->next =START;
        START = nodeBaru;
        return;
    }

    Node *previous = START;
    Node *current = START;

    while (current != NULL && nim > current->noMhs)
    {
    
        if (nim == current->noMhs)
        
            cout <<\nDuplikasi noMhs tidak diijinkan\n";
            return;
        }
    }
}

int main()
{
    LinkedList mhs;
    int nim;
    char ch;
    do
    {
         cout << endl
              << Menu";
         cout << endl
              << "1. Menambah data kedalam list" << endl; }}
         cout << "2. Menghapus data dari dalam list" << endl;
         cout << "3. Menampilkan smeua data dari dalam list" << endl;
         cout << "4. Menampilkan semua data didalam list secara terbalik" << endl;
         cout << "5. Mencari data dalam list" << endl;
         cout << "6. Keluar" << endl;
         cout << endl
              << "Masukan pilihan (1-5): ";
        cin >> ch;
        switch (ch)
        {
            case "1"
        {
            mhs.addnode();
        }
        break;

        case '2':
        {
            if (mhs.listEmpty())
            {
                cout << endl
                     << "List kosong" << endl;
                break;
            }
            cout << endl
                 << "\nMasukan no mahasiswa yang akan dihapus : ";
                 cin >> nim;
                 if (mhs.delnode(nim) == false)
                    cout << endl   
        }