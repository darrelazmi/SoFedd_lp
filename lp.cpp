#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>
#include "lp_lib.h"

using namespace std;

class Animal
{
public:
    Animal(int x)
    {
        switch (x)
        {
        case 0:  // sapi potong penggemukan
            bahan_kering_min = 86;
            abu_min = 0;
            PK_min = 13;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 68;
            Ca_min = 0.6;
            P_min = 0.4;
            bahan_kering_max = -1;
            abu_max = -1;
            PK_max = -1;
            LK_max = 7;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 1.2;
            P_max = 0.8;
            break;
        case 1:  // sapi potong induk
            bahan_kering_min = 86;
            abu_min = 0;
            PK_min = 12;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 65;
            Ca_min = 0.8;
            P_min = 0.6;
            bahan_kering_max = -1;
            abu_max = -1;
            PK_max = -1;
            LK_max = 6;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 1.2;
            P_max = 0.8;
            break;
        case 2:  // sapi potong pejantan
            bahan_kering_min = 86;
            abu_min = 0;
            PK_min = 12;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 65;
            Ca_min = 0.6;
            P_min = 0.3;
            bahan_kering_max = -1;
            abu_max = -1;
            PK_max = -1;
            LK_max = 6;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 0.8;
            P_max = 0.6;
            break;
        case 3:  // sapi perah calf starter 1
            bahan_kering_min = 86;
            abu_min = 0;
            PK_min = 21;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 80;
            Ca_min = 0.7;
            P_min = 0.4;
            bahan_kering_max = -1;
            abu_max = -1;
            PK_max = -1;
            LK_max = 12;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 0.9;
            P_max = 0.6;
            break;
        case 4:  // sapi perah calf starter 2
            bahan_kering_min = 86;
            abu_min = 0;
            PK_min = 16;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 70;
            Ca_min = 0.6;
            P_min = 0.4;
            bahan_kering_max = -1;
            abu_max = -1;
            PK_max = -1;
            LK_max = 7;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 0.8;
            P_max = 0.6;
            break;
        case 4:  // sapi perah dara
            bahan_kering_min = 86;
            abu_min = 0;
            PK_min = 15;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 70;
            Ca_min = 0.6;
            P_min = 0.4;
            bahan_kering_max = -1;
            abu_max = -1;
            PK_max = -1;
            LK_max = 7;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 1;
            P_max = 0.6;
            break;
        case 5:  // sapi perah laktasi
            bahan_kering_min = 86;
            abu_min = 0;
            PK_min = 14;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 68;
            Ca_min = 0.8;
            P_min = 0.4;
            bahan_kering_max = -1;
            abu_max = -1;
            PK_max = -1;
            LK_max = 7;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 1.2;
            P_max = 0.6;
            break;
        case 6:  // sapi perah laktasi prod tinggi
            bahan_kering_min = 86;
            abu_min = 0;
            PK_min = 18;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 68;
            Ca_min = 0.8;
            P_min = 0.4;
            bahan_kering_max = -1;
            abu_max = -1;
            PK_max = -1;
            LK_max = 7;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 1.3;
            P_max = 0.8;
            break;
        case 7:  // sapi perah kering bunting
            bahan_kering_min = 86;
            abu_min = 0;
            PK_min = 16;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 68;
            Ca_min = 0.8;
            P_min = 0.4;
            bahan_kering_max = -1;
            abu_max = -1;
            PK_max = -1;
            LK_max = 7;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 1.2;
            P_max = 0.8;
            break;
        case 8:  // sapi perah jantan
            bahan_kering_min = 86;
            abu_min = 0;
            PK_min = 12;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 65;
            Ca_min = 0.6;
            P_min = 0.3;
            bahan_kering_max = -1;
            abu_max = -1;
            PK_max = -1;
            LK_max = 6;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 0.8;
            P_max = 0.6;
            break;
        case 9:  // sapi perah dara
            bahan_kering_min = 86;
            abu_min = 0;
            PK_min = 15;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 70;
            Ca_min = 0.6;
            P_min = 0.4;
            bahan_kering_max = -1;
            abu_max = -1;
            PK_max = -1;
            LK_max = 7;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 1;
            P_max = 0.6;
            break;
        case 10:  // domba pengemukan
            bahan_kering_min = 0;
            abu_min = 0;
            PK_min = 10;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 60;
            Ca_min = 0.3;
            P_min = 0.2;
            bahan_kering_max = -1;
            abu_max = 8;
            PK_max = -1;
            LK_max = 7;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 0.8;
            P_max = -1;
            break;
        case 11:  // anak kambing perah
            bahan_kering_min = 0;
            abu_min = 0;
            PK_min = 16;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 65;
            Ca_min = 0.3;
            P_min = 0.4;
            bahan_kering_max = -1;
            abu_max = 8;
            PK_max = -1;
            LK_max = 7;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 0.8;
            P_max = -1;
            break;
        case 12:  // kambing perah laktasi
            bahan_kering_min = 0;
            abu_min = 0;
            PK_min = 14;
            LK_min = 0;
            SK_min = 0;
            TDN_min = 65;
            Ca_min = 0.3;
            P_min = 0.4;
            bahan_kering_max = -1;
            abu_max = 9;
            PK_max = -1;
            LK_max = 7;
            SK_max = -1;
            TDN_max = -1;
            Ca_max = 0.8;
            P_max = -1;
            break;
        default:
            break;
        }
    }

private:
    double bahan_kering_min;
    double abu_min;
    double PK_min;
    double LK_min;
    double SK_min;
    double TDN_min;
    double Ca_min;
    double P_min;
    double bahan_kering_max;
    double abu_max;
    double PK_max;
    double LK_max;
    double SK_max;
    double TDN_max;
    double Ca_max;
    double P_max;
};


class Bahan
{
public:
    Bahan(int aktif, String nama_bahan, double minimal, double maximal, double bahan_kering, double abu, double PK, double LK, double SK, double TDN, double P)
    {
        this->aktif = aktif;
        this->nama_bahan = nama_bahan;
        this->minimal = minimal;
        this->maximal = maximal;
        this->bahan_kering = bahan_kering;
        this->abu = abu;
        this->PK = PK;
        this->LK = LK;
        this->SK = SK;
        this->TDN = TDN;
        this->Ca = Ca;
        this->P = P;
    };

    int cek()
    {
        return aktif;
    }

    double komposisi(int pilih)
    {
        switch(pilih)
        {
            case 0: return minimal;
            case 1: return maximal;
            case 2: return bahan_kering;
            case 3: return abu;
            case 4: return PK;
            case 5: return LK;
            case 6: return SK;
            case 7: return TDN;
            case 8: return Ca;
            case 9: return P;
            default: return -1;
        }
    }

    string name()
    {
        return nama_bahan;
    }

private:
    int aktif;
    string nama_bahan;
    int id;
    double minimal;
    double maximal;
    double bahan_kering;
    double abu;
    double PK;
    double LK;
    double SK;
    double TDN;
    double Ca;
    double P;
}


int main()
{
    lprec* problem;
    problem = make_lp(0, 16);
    set_minim(problem);
    double data[35][8]={ 
        17.90,	13.80,	 9.70,	 2.00,	36.10,	58.00,	 0.36,	 0.29,
        17.90,	14.00,	10.00,	 2.00,	37.00,	60.00,	 0.36,	 0.29,
        23.30,	 7.00,	 7.90,	 1.90,	28.70,	56.67,	 0.36,	 0.21,
        28.10,	 9.10,	 8.20,	 1.90,	33.60,	60.00,	 0.41,	 0.20,
        92.80,	18.10,	 4.20,	 1.40,	35.10,	47.00,	 0.29,	 0.09,
        86.30,	 1.40,	 9.40,	 4.30,	 2.50,	80.80,	 0.05,	 0.30,
        90.20,	12.40,	10.00,	14.40,	16.30,	67.90,	 0.07,	 1.38,
        89.20,	16.90,	 8.36,	 3.97,	28.90,	50.00,	 0.14,	 0.80,
        87.00,	 5.60,	17.30,	 3.90,	10.40,	69.20,	 0.14,	 1.11,
        79.80,	 2.40,	 1.87,	 0.32,	 8.90,	78.30,	 0.20,	 0.10,
        79.50,	 4.69,	 2.60,	 0.70,	 5.67,	78.50,	 0.17,	 0.09,
        90.70,	 0.50,	12.40,	 1.30,	 0.80,	76.00,	 0.10,	 0.62,
        73.00,	14.60,	 5.50,	 1.00,	 0.10,	70.70,	 0.92,	 0.07,
        88.30,	 6.90,	21.70,	 3.40,	 8.30,	78.50,	 0.03,	 0.40,
        88.90,	 5.90,	30.20,	10.90,	 8.80,	70.00,	 0.00,	 0.00,
        87.90,	 7.10,	51.80,	 2.00,	 6.70,	83.20,	 0.39,	 0.69,
        89.80,	 7.00,	23.50,	 2.80,	16.80,	78.70,	 0.07,	 0.65,
        90.90,	 4.60,	18.70,	 2.80,	20.20,	79.00,	 0.27,	 0.66,
        90.40,	 2.40,	53.30,	 2.10,	 7.10,	80.90,	 0.18,	 0.69,
        90.90,	 7.40,	47.30,	 3.00,	12.90,	73.70,	 0.21,	 1.31,
        89.50,	 7.90,	34.10,	 8.10,	17.70,	72.00,	 0.49,	 0.95,
        70.00,	11.28,	 9.94,	 1.97,	18.17,	50.60,	 0.68,	 0.20,
        94.60,	 4.50,	32.00,	10.20,	17.30,	75.40,	 0.21,	 0.56,
        26.60,	14.20,	23.50,	24.20,	16.00,	87.20,	 0.88,	 0.14,
        14.60,	 5.10,	30.30,	 9.90,	22.20,	77.90,	 0.07,	 0.36,
        88.00,	 9.14,	 8.04,	 2.44,	11.70,	51.16,	 0.26,	 0.16,
        10.20,	 1.55,	 2.52,	 0.80,	24.50,	52.00,	 0.00,	 0.00,
        95.00,	99.00,	 0.00,	 0.00,	 0.00,	 0.00,	 0.00,	 0.00,
        95.00,	99.00,	 0.00,	 0.00,	 0.00,	 0.00,	36.00,	 0.00,
        95.00,	99.00,	 0.00,	 0.00,	 0.00,	 0.00,	35.00,	 0.00,
        95.00,	99.00,	 0.00,	 0.00,	 0.00,	 0.00,	40.00,	 0.00,
        95.00,	99.00,	 0.00,	 0.00,	 0.00,	 0.00,	23.00,	17.00,
        95.00,	99.00,	 0.00,	 0.00,	 0.00,	 0.00,	20.00,	10.00,
        95.00,	88.00,	 0.00,	 0.00,	 0.00,	 0.00,	20.00,	10.00,
        95.00,	88.00,	 0.00,	 0.00,	 0.00,	 0.00,	 2.00,	 5.00
    };
    double c1[35];
    for (int i = 0; i < 35; i++)
    {
        c1[i]=data[i][0]; 
    }
    set_obj_fn(problem, c1);
    double c2[35];
    for (int i = 0; i < 35; i++)
    {
        c2[i]=data[i][1]; 
    }
    add_constraint(problem, c2, LE, 70);
    add_constraint(problem, c2, GE, 0);
    double c3[35] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    add_constraint(problem, c3, EQ, 100);
    solve(problem);
    double sol[16];
    get_variables(problem, sol);
    cout << "Optimal percentage:\n";
    for (int i=0;i<35;i++)
    {
        cout << "Bahan " << i << ": " << fixed << setprecision(5) << sol[i] << "%\n";
    }
}