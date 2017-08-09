// Composite.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Employee.h"
#include "ShopKeeper.h"
#include "ShopSaler.h"


/*
design_pattern:"compositor"
�� �� ��(A)
    /    |    \
    B    C     D
            /     \
           E       F
                  / \
                 G   H
A:�����ܵ곤(����)
B:�ܵ��Ա(��һ)
C:�ܵ��Ա(����)
D:�������곤(����)
E:��������Ա(����)
F:����������ֵ��곤(����)
G:����ֵ���Ա(����)
H:����ֵ���Ա(����)
*/

int main()
{

	Employee *shop_keeper_A = new ShopKeeper("�����ܵ곤(����)", 40, 10000);
	Employee *shop_saler_B = new ShopSaler("�ܵ��Ա(��һ)", 18, 6000);
	Employee *shop_saler_C = new ShopSaler("�ܵ��Ա(����)", 19, 5500);
	Employee *shop_keeper_D = new ShopKeeper("�������곤(����)", 35, 8000);
	Employee *shop_saler_E = new ShopSaler("��������Ա(����)", 20, 5000);
	Employee *shop_keeper_F = new ShopKeeper("����������ֵ��곤(����)", 33, 7000);
	Employee *shop_saler_G = new ShopSaler("����ֵ���Ա(����)", 21, 4500);
	Employee *shop_saler_H = new ShopSaler("����ֵ���Ա(����)", 22, 4000);


	shop_keeper_F->add(shop_saler_G);
	shop_keeper_F->add(shop_saler_H);

	shop_keeper_D->add(shop_saler_E);
	shop_keeper_D->add(shop_keeper_F);


	shop_keeper_A->add(shop_saler_B);
	shop_keeper_A->add(shop_saler_C);
	shop_keeper_A->add(shop_keeper_D);

	shop_keeper_A->ShowInformation();

	getchar();
    return 0;
}

