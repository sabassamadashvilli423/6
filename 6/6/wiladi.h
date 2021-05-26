#pragma once
#include <iostream>
#include<string>
#include <vector>
#include<cmath>
#include<algorithm>
using namespace std;
class wiladi
{
public:
	int a, b;
	wiladi() {

	}
	  wiladi  operator + (wiladi &obj) {
		 wiladi h;
		 h.b = a * obj.a;
		 h.a = (h.b / b * a) + (h.b / obj.b * obj.a);
		 int m=h.a, n=h.b;
		 while (m != n) {
			 if (m > n) {
				 m -= n;
			 }
			 else n -= m;
		 }
		 h.a /= n;
		 h.b /= n;
		 return h;
	 }
};

