/*
��蕶
2 �̐����� a, b ���^�����܂��B a, b �̕��ϒl�� x �Ƃ��܂��B x �̏����_�ȉ���؂�グ�ē����鐮�����o�͂��Ă��������B
*/

#include<iostream>

//��ԊȒP�Ȃ̂��ꂵ���v�����Ȃ������c�@���ɗǂ������Ȃ̂���܂����H

int main() {
	int a, b;
	double n,m;
	std::cin >> a >> b;

	n = (a + b) / 2.0;
	m = int(n);

	std::cout<<(n == m ? m : m + 1) << std::endl;
	return 0;
}