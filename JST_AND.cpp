#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void typewrite(string a)
{
    cout << "\t\t\t";
    for (int i = 0; a[i] != '\0'; i++)
    {
        cout << a[i] << "\xDB";
        for (auto j = 0; j < 50000000; j++)
            ;
        cout << "\b \b";
    }
    cout << "\n";
};

void header()
{
    system("cls");
    cout << "\x1B[36m\t     ___  _______  _______    __   __  _______  _______  _______  ______   _______    _______  __    _  ______ \033[0m\t\t" << endl;
    cout << "\x1B[36m\t    |   ||       ||       |  |  |_|  ||       ||       ||       ||      | |       |  |   _   ||  |  | ||      |\033[0m\t\t " << endl;
    cout << "\x1B[36m\t    |   ||  _____||_     _|  |       ||    ___||_     _||   _   ||  _    ||    ___|  |  |_|  ||   |_| ||  _    |\033[0m\t\t" << endl;
    cout << "\x1B[36m\t    |   || |_____   |   |    |       ||   |___   |   |  |  | |  || | |   ||   |___   |       ||       || | |   |\033[0m\t\t" << endl;
    cout << "\x1B[34m\t ___|   ||_____  |  |   |    |       ||    ___|  |   |  |  |_|  || |_|   ||    ___|  |       ||  _    || |_|   |\033[0m\t\t" << endl;
    cout << "\x1B[34m\t|       | _____| |  |   |    | ||_|| ||   |___   |   |  |       ||       ||   |___   |   _   || | |   ||       |\033[0m\t\t" << endl;
    cout << "\x1B[34m\t|_______||_______|  |___|    |_|   |_||_______|  |___|  |_______||______| |_______|  |__| |__||_|  |__||______|\033[0m\t\t " << endl;
    cout << "   <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
    cout << "\x1B[33m                                          * Kelompok 5 | Kecerdasan Buatan - B081 *\033[0m\t\t " << endl;
    cout << "   <><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
};

int main()
{
    int i;
    // Inisiasi
    int x1 = 1;
    int x2, x3;
    int x4, x5;
    int x6, x7;
    int x8, x9;
    int inputX[4][2];
    int testInputX[1][2];
    int target[4];
    int testTarget;
    int testSetX[] = {x1, testInputX[0][0], testInputX[0][1]};
    double weight[3];
    double miu = 0.1;
    int iterate = 10;
    double sum, hasilsum;
    int error;
    double weightBaru;
    int totalErr;
    int pilihan;
    int epoch;
    char exit;
    char message[250] = "\t\tSelamat datang di JST ya TOTTT:))\033";
    char message1[250] = "JST Dibuat untuk menghitung bobot yang valid";
    char message2[250] = "Dengan JST kamu dapat menghemat waktumu untuk mencari bobot";
    char message3[250] = "Karena JST dalam pembuatanya sudah merenggut banyak waktu gwehhh";

    weight[0] = 0;
    weight[1] = 0;
    weight[2] = 0;

    inputX[0][0] = 0;
    inputX[0][1] = 0;

    inputX[1][0] = 0;
    inputX[1][1] = 0;

    inputX[2][0] = 0;
    inputX[2][1] = 0;

    inputX[3][0] = 0;
    inputX[3][1] = 0;

    target[0] = 0;
    target[1] = 0;
    target[2] = 0;
    target[3] = 0;
    miu = 0;
    iterate = 0;

    header();
    typewrite(message);
    typewrite(message1);
    typewrite(message2);
    typewrite(message3);
    getch();
    do
    {
        system("cls");

        header();
        cout << endl;
        cout << "\t\tIterasi : " << iterate << endl;
        cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
        cout << "\t\t||  x1  |  x2  |  x3  |      w1       |      w2      |      w3      |   T  |   Miu  ||" << endl;
        cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
        for (i = 0; i < 4; i++)
        {
            sum = 0;
            int setX[] = {x1, inputX[i][0], inputX[i][1]};
            for (int j = 0; j < 3; j++)
            {
                sum += setX[j] * weight[j];
            }
            if (sum >= 0)
            {
                hasilsum = 1;
            }
            else
            {
                hasilsum = 0;
            }
            error = target[i] - hasilsum;
            cout << "\t\t||  " << x1 << "   |  " << inputX[i][0] << "   |  " << inputX[i][1] << "   |  " << setw(8) << weight[0] << setw(8) << "  |  " << setw(8) << weight[1] << setw(8) << "   |   " << setw(6) << weight[2] << setw(9) << "   |   " << target[i] << "  |   " << miu << "  ||" << endl;
        }

        cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
        cout << endl;
        cout << "\t\t+--------------------------------------+" << endl;
        cout << "\t\t|                Menu                  |" << endl;
        cout << "\t\t+--------------------------------------+" << endl;
        cout << "\t\t|   1   | Input X, W, dan T" << setw(13) << "|" << endl;
        cout << "\t\t|   2   | Input jumlah iterasi" << setw(10) << "|" << endl;
        cout << "\t\t|   3   | Input jumlah miu" << setw(14) << "|" << endl;
        cout << "\t\t|   4   | Hitung" << setw(24) << "|" << endl;
        cout << "\t\t|   5   | Test dengan bobot valid" << setw(7) << "|" << endl;
        cout << "\t\t|   0   | Exit" << setw(26) << "|" << endl;
        cout << "\t\t+--------------------------------------+" << endl;
        cout << "\t\tMasukkan Pilihan :";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            system("cls");
            // Meminta input X
            for (int x = 0; x < 4; x++)
            {
                header();
                cout << endl;
                cout << "\t\tIterasi : " << iterate << endl;
                cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
                cout << "\t\t||  x1  |  x2  |  x3  |      w1       |      w2      |      w3      |   T  |   Miu  ||" << endl;
                cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
                for (i = 0; i < 4; i++)
                {
                    sum = 0;
                    int setX[] = {x1, inputX[i][0], inputX[i][1]};
                    for (int j = 0; j < 3; j++)
                    {
                        sum += setX[j] * weight[j];
                    }
                    if (sum >= 0)
                    {
                        hasilsum = 1;
                    }
                    else
                    {
                        hasilsum = 0;
                    }
                    error = target[i] - hasilsum;
                    cout << "\t\t||  " << x1 << "   |  " << inputX[i][0] << "   |  " << inputX[i][1] << "   |  " << setw(8) << weight[0] << setw(8) << "  |  " << setw(8) << weight[1] << setw(8) << "   |   " << setw(6) << weight[2] << setw(9) << "   |   " << target[i] << "  |   " << miu << "  ||" << endl;
                }

                cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
                cout << endl;
                cout << "\t\tMasukkan Input ke " << x + 1 << endl;
                cout << "\t\tx1 = 1" << endl;
                cout << "\t\tx2 = ";
                cin >> inputX[x][0];
                cout << "\t\tx3 = ";
                cin >> inputX[x][1];
                cout << "\t\tMasukkan Target :";
                cin >> target[x];
                cout << endl;
                cout << "\t\tPress any key to continue...";
                getch();
                system("cls");
            }

            // Input Weight
            system("cls");
            header();
            cout << endl;
            cout << "\t\tIterasi : " << iterate << endl;
            cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
            cout << "\t\t||  x1  |  x2  |  x3  |      w1       |      w2      |      w3      |   T  |   Miu  ||" << endl;
            cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
            for (i = 0; i < 4; i++)
            {
                sum = 0;
                int setX[] = {x1, inputX[i][0], inputX[i][1]};
                for (int j = 0; j < 3; j++)
                {
                    sum += setX[j] * weight[j];
                }
                if (sum >= 0)
                {
                    hasilsum = 1;
                }
                else
                {
                    hasilsum = 0;
                }
                error = target[i] - hasilsum;
                cout << "\t\t||  " << x1 << "   |  " << inputX[i][0] << "   |  " << inputX[i][1] << "   |  " << setw(8) << weight[0] << setw(8) << "  |  " << setw(8) << weight[1] << setw(8) << "   |   " << setw(6) << weight[2] << setw(9) << "   |   " << target[i] << "  |   " << miu << "  ||" << endl;
            }

            cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
            cout << "\t\tMasukkan Weight  " << endl;
            for (i = 0; i < 3; i++)
            {
                cout << "\t\tw" << i + 1 << ": ";
                cin >> weight[i];
            }

            break;

        case 2:
            // Input banyak iterasi
            system("cls");
            header();
            cout << endl;
            cout << "\t\tIterasi : " << iterate << endl;
            cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
            cout << "\t\t||  x1  |  x2  |  x3  |      w1       |      w2      |      w3      |   T  |   Miu  ||" << endl;
            cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
            for (i = 0; i < 4; i++)
            {
                sum = 0;
                int setX[] = {x1, inputX[i][0], inputX[i][1]};
                for (int j = 0; j < 3; j++)
                {
                    sum += setX[j] * weight[j];
                }
                if (sum >= 0)
                {
                    hasilsum = 1;
                }
                else
                {
                    hasilsum = 0;
                }
                error = target[i] - hasilsum;
                cout << "\t\t||  " << x1 << "   |  " << inputX[i][0] << "   |  " << inputX[i][1] << "   |  " << setw(8) << weight[0] << setw(8) << "  |  " << setw(8) << weight[1] << setw(8) << "   |   " << setw(6) << weight[2] << setw(9) << "   |   " << target[i] << "  |   " << miu << "  ||" << endl;
            }

            cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
            cout << "\t\tMasukan jumlah iterasi: ";
            cin >> iterate;
            break;

        case 3:
            // Input Learning rate
            system("cls");
            header();
            cout << endl;
            cout << "\t\tIterasi : " << iterate << endl;
            cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
            cout << "\t\t||  x1  |  x2  |  x3  |      w1       |      w2      |      w3      |   T  |   Miu  ||" << endl;
            cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
            for (i = 0; i < 4; i++)
            {
                sum = 0;
                int setX[] = {x1, inputX[i][0], inputX[i][1]};
                for (int j = 0; j < 3; j++)
                {
                    sum += setX[j] * weight[j];
                }
                if (sum >= 0)
                {
                    hasilsum = 1;
                }
                else
                {
                    hasilsum = 0;
                }
                error = target[i] - hasilsum;
                cout << "\t\t||  " << x1 << "   |  " << inputX[i][0] << "   |  " << inputX[i][1] << "   |  " << setw(8) << weight[0] << setw(8) << "  |  " << setw(8) << weight[1] << setw(8) << "   |   " << setw(6) << weight[2] << setw(9) << "   |   " << target[i] << "  |   " << miu << "  ||" << endl;
            }

            cout << "\t\t++----------------------------------------------------------------------------------++" << endl;
            cout << "\t\tMasukkan Miu: ";
            cin >> miu;
            break;

        case 4:
            // Perhitungan
            system("cls");
            header();
            cout << endl;
            for (epoch = 0; epoch < iterate; epoch++)
            {
                totalErr = 0;
                cout << endl;
                cout << "\t\t++----------------------------------------------------------------------------------------------------------------++" << endl;
                cout << "\t\t||                                                      EPOCH " << epoch + 1 << "                                                  ||" << endl;
                cout << "\t\t++----------------------------------------------------------------------------------------------------------------++" << endl;
                cout << "\t\t||  x1  |  x2  |  x3  |      w1       |      w2      |       w3       |     Jumlah    |  Y  |  T  |  Err  |  Miu  ||" << endl;
                cout << "\t\t++----------------------------------------------------------------------------------------------------------------++" << endl;
                for (i = 0; i < 4; i++)
                {
                    sum = 0;
                    int setX[] = {x1, inputX[i][0], inputX[i][1]};
                    for (int j = 0; j < 3; j++)
                    {
                        sum += setX[j] * weight[j];
                    }
                    if (sum >= 0)
                    {
                        hasilsum = 1;
                    }
                    else
                    {
                        hasilsum = 0;
                    }
                    error = target[i] - hasilsum;

                    cout << "\t\t||  " << x1 << "   |  " << inputX[i][0] << "   |  " << inputX[i][1] << "   |  " << setw(8) << weight[0] << setw(8) << "  |  " << setw(8) << weight[1] << setw(8) << "   |   " << setw(8) << weight[2] << setw(8) << "   |  " << setw(8) << sum << setw(8) << "  |  " << hasilsum << "  |  " << target[i] << "  |   " << error << "   |  " << miu << "  ||" << endl;

                    if (error != 0)
                    {
                        for (int k = 0; k < 3; k++)
                        {
                            weightBaru = weight[k] + (miu * setX[k] * error);
                            weight[k] = weightBaru;
                        }
                        if (error != 0)
                        {
                            totalErr++;
                        }
                    }
                }
                cout << "\t\t++----------------------------------------------------------------------------------------------------------------++" << endl;
                cout << "\t\t|||><><><><><><><><><><><><><><><><><><><> Total error EPOCH Ke " << epoch + 1 << " : " << totalErr << " <><><><><><><><><><><><><><><><><><><><><>|||" << endl;
                cout << "\t\t++----------------------------------------------------------------------------------------------------------------++" << endl;
            }

            cout << endl;
            cout << "\t\tBerdasarkan perhitungan dengan Miu = " << miu << endl;
            cout << "\t\tBobot yang ditemukan pada Epoch " << epoch << endl;
            cout << "\t\t++-----------------++" << endl;
            cout << "\t\t||    W E I G H T  ||" << endl;
            cout << "\t\t++-----------------++" << endl;
            cout << "\t\t|| w1 | " << setw(8) << weight[0] << setw(5) << "||" << endl;
            cout << "\t\t|| w2 | " << setw(8) << weight[1] << setw(5) << "||" << endl;
            cout << "\t\t|| w3 | " << setw(8) << weight[2] << setw(5) << "||" << endl;
            cout << "\t\t++-----------------++" << endl;
            cout << "\t\tPress any key to continue...";
            getch();
            break;

        case 5:
            // hitung
            system("cls");
            header();
            cout << endl;
            cout << "\t\t++-----------------++" << endl;
            cout << "\t\t||    W E I G H T  ||" << endl;
            cout << "\t\t++-----------------++" << endl;
            cout << "\t\t|| w1 | " << setw(8) << weight[0] << setw(5) << "||" << endl;
            cout << "\t\t|| w2 | " << setw(8) << weight[1] << setw(5) << "||" << endl;
            cout << "\t\t|| w3 | " << setw(8) << weight[2] << setw(5) << "||" << endl;
            cout << "\t\t++-----------------++" << endl;
            cout << "\n\t\tx1 = 1" << endl;
            cout << "\t\tx2 = ";
            cin >> testInputX[0][0];
            cout << "\t\tx3 = ";
            cin >> testInputX[0][1];
            cout << "\t\tTarget = ";
            cin >> testTarget;
            cout << "\n\t\t++--------------------------------------------------------------------------------------------++" << endl;
            cout << "\t\t||  x1  |  x2  |  x3  |    w1    |    w2    |    w3    |  Jumlah  |  Y  |  T  |  Err  |  Miu  ||" << endl;
            cout << "\t\t++--------------------------------------------------------------------------------------------++" << endl;
            sum = 0;
            sum += x1 * weight[0];
            sum += testInputX[0][0] * weight[1];
            sum += testInputX[0][1] * weight[2];

            if (sum >= 0)
            {
                hasilsum = 1;
            }
            else
            {
                hasilsum = 0;
            }
            error = testTarget - hasilsum;

            cout << "\t\t||  " << x1 << "   |  " << testInputX[0][0] << "   |  " << testInputX[0][1] << "   |  " << weight[0] << "  |  " << weight[1] << "   |   " << weight[2] << "   |  " << sum << "  |  " << hasilsum << "  |  " << testTarget << "  |   " << error << "   |  " << miu << "  ||" << endl;
            cout << "\t\t++--------------------------------------------------------------------------------------------++" << endl;
            cout << "\t\tPress any key to continue...";
            getch();
            break;
        case 0:
            system("cls");
            header();
            cout << endl;
            cout << "\t\t\t\t\t\tTerima kasih telah menggunakan program JST kami \u1F600" << endl;
            cout << "\t\t\t\t\t\t--------------------------------------------------" << endl;
            cout << "\t\t\t\t\t\t\t\tAnggota Kelompok" << endl;
            cout << "\t\t\t\t\t\t--------------------------------------------------" << endl;
            cout << "\t\t\t\t\t\t\t21081010001 Mochammad Fahmi Yasir" << endl;
            cout << "\t\t\t\t\t\t\t21081010009 Cintya Juanita Elizabeth K." << endl;
            cout << "\t\t\t\t\t\t\t21081010034 Jihan Octavia Salsabillah H." << endl;
            cout << "\t\t\t\t\t\t\t21081010054 Adham Roy Bhafiel" << endl;
            cout << "\t\t\t\t\t\t\t21081010214 Ryan Reynickha F." << endl;
            cout << "\t\t\t\t\t\t--------------------------------------------------" << endl;
            goto exit;
            break;

        default:
            cout << endl;
            cout << "\t\tinput salah";
        }
        system("cls");
    } while (exit = 't');
exit:
    return 0;
}
