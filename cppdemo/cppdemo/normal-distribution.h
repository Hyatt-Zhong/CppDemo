#pragma once
#include <iostream>
#include <string>
#include <random>
#include <iomanip>
#include <fstream>
namespace normaldist {
    using namespace std;
    int func()
    {
        //default_random_engine generator;//��������Ĭ�ϵ����棬ÿ�����ɵ������������ͬ�ġ�
        random_device rd;
        mt19937 gen(rd());

        //normal(0,1)��0Ϊ��ֵ��1Ϊ����
        normal_distribution<double> normal(0, 1);
        ofstream ofs;
        //�����д���ļ�
        string path = "result.txt";
        ofs.open(path, ios::out);

        for (int n = 0; n < 10000; ++n) {
            for (int j = 0; j < 20; ++j)
            {
                ofs << setprecision(4) << normal(gen) << " ";
            }
        }
        ofs.close();

        return 0;
    }
};