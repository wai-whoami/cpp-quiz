/*
################################################
. Summary : a small c++ judging tool on windows
. Author  : foxzzz, i@foxzzz.com, QQ 406609631
. Date    : 2019/11/01
################################################

【每行T个的数列】
输入
  输入三个整数M，N,T。（M <= N, 0 < T）

输出
  从小到大依次输出从M到N范围内的所有整数；
  每行输出T个数，分多行输出；
  每个数采用宽度为3的左对齐格式输出。

示例
  输入：
	1 20 4
  输出：
    1  2  3  4
    5  6  7  8
    9  10 11 12
    13 14 15 16
    17 18 19 20
*/

#ifndef __A023__
#define __A023__

#ifdef JUDGE_MODE
#include "./judge.h"

#define ID "A023"

namespace foxzzz {

	class TheJudge : public StrictJudge {
	public:
		TheJudge() : StrictJudge(ID, "每行T个的数列") {}

	private:
		//virtual ProcedureCall verify() {
		//	return verifyCode;
		//}

		//static void verifyCode() {
		//	int m, n, t;
		//	scanf("%d%d%d", &m, &n, &t);
		//	for (int i = m; i <= n; ++i) {
		//		printf("%-3d", i);
		//		if ((i - m) % t == (t - 1)) {
		//			printf("\n");
		//		}
		//	}
		//}
	};

	LAUNCH_JUDGE(TheJudge)
}

#endif

#endif
