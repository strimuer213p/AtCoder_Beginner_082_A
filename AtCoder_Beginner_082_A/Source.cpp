/*
問題文
2 つの正整数 a, b が与えられます。 a, b の平均値を x とします。 x の小数点以下を切り上げて得られる整数を出力してください。
*/

#include<iostream>

//一番簡単なのこれしか思いつかなかった…　他に良さそうなのありますか？

int main() {
	int a, b;
	double n,m;
	std::cin >> a >> b;

	n = (a + b) / 2.0;
	m = int(n);

	std::cout<<(n == m ? m : m + 1) << std::endl;
	return 0;
}