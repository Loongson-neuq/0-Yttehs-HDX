#include ".assignment/test.h"

// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    // 在这里完成你的代码
		int len = 3;
		int list[] = {a, b, c};
		for (int i = 0; i < len; ++i) {
				for (int j = 0; j < len - i - 1; ++j) {
						if (list[j] > list[j + 1]) {
								int tmp = list[j];
								list[j] = list[j + 1];
								list[j + 1] = tmp;
						}
				}
		}
		result.min = list[0];
		result.mid = list[1];
		result.max = list[2];
}
