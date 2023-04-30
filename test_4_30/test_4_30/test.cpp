//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//#include <math.h>
//
//#include <windows.h>
//
//#include <tchar.h>
//
//
//
//float f(float x, float y, float z) {
//
//	float a = x * x + 9.0f / 4.0f * y * y + z * z - 1;
//
//	return a * a * a - x * x * z * z * z - 9.0f / 80.0f * y * y * z * z * z;
//
//
//
//}
//
//
//
//float h(float x, float z) {
//
//	float y;
//	for (y = 1.0f; y >= 0.0f; y -= 0.001f) {
//
//
//		if (f(x, y, z) <= 0.0f) {
//
//
//			return y;
//
//		}
//	}
//	return 0.0f;
//
//}
//
//
//
//void color() {
//
//	system("color c");
//
//}
//
//
//
//void sentance() {
//
//	char title[] = "================2022.11.10==================";
//
//	char word1[] = ">>五四心律<<";
//
//	char word2[] = "             五四青年节快乐！！！";
//
//	char word3[] = "                              >>因我跳动<<";
//
//	printf("\n\t ");
//
//	printf("%s", title);
//
//	printf("\n\t ");
//
//	printf("%s", word1);
//
//	printf("\n\t ");
//
//	printf("%s", word2);
//
//	printf("\n\t ");
//
//	printf("%s", word3);
//
//
//}
//
//
//
//int main() {
//
//
//
//	HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
//
//	_TCHAR buffer[25][80] = { _T(' ') };
//
//	_TCHAR ramp[] = _T(".:-=+*#%@");
//
//	float t;
//
//	for (t = 0.0f;; t += 0.1f) {
//
//		int sy = 0;
//
//		float s = sinf(t);
//
//		float a = s * s * s * s * 0.2f;
//
//		float z;
//		for (z = 1.3f; z > -1.2f; z -= 0.1f) {
//
//			_TCHAR* p = &buffer[sy++][0];
//
//			float tz = z * (1.2f - a);
//			float x;
//
//			for (x = -1.5f; x < 1.5f; x += 0.05f) {
//
//				float tx = x * (1.2f + a);
//
//				float v = f(tx, 0.0f, tz);
//
//				if (v <= 0.0f) {
//
//					float y0 = h(tx, tz);
//
//					float ny = 0.01f;
//
//					float nx = h(tx + ny, tz) - y0;
//
//					float nz = h(tx, tz + ny) - y0;
//
//					float nd = 1.0f / sqrtf(nx * nx + ny * ny + nz * nz);
//
//					float d = (nx + ny - nz) * nd * 0.5f + 0.5f;
//
//					*p++ = ramp[(int)(d * 5.0f)];
//
//				}
//
//				else
//
//					*p++ = ' ';
//
//			}
//
//		}
//
//
//
//
//
//		for (sy = 0; sy < 25; sy++) {
//
//			COORD coord = { 0, sy };
//
//			SetConsoleCursorPosition(o, coord);
//
//			WriteConsole(o, buffer[sy], 79, NULL, 0);
//
//
//
//		}
//
//		Sleep(33);
//
//		color();
//
//		sentance();
//
//
//
//	}
//
//
//
//}