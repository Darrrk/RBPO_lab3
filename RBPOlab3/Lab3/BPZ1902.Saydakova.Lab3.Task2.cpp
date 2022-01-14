
module BPZ1902.Saydakova.Lab3.Task2;

namespace RBPO {
	namespace Lab3 {
		namespace Task2 {
			double f1(double x) {
				return (((x + 2)/(sqrt(2 * x)))-(x/(sqrt(2 * x) + 2))+(2/(x - sqrt(2 * x))))*((sqrt(x)-(sqrt(2)))/(x + 2));
			}
			double f2(double x) {
				if (x > -3) {
					return log(x + 3) / (x * x + 9);
				}
				else {
					return -x * x - 1.1 * x + 9;
				}
			}
			double a(int i) {
				return  (pow(-1.0, i) * ((i + 1) / (double)(i * i * +1)));
			}
			double f3(int n) {
				double sum = 0.0;
				int i = 0;
				while (i <= n) {
					sum += a(i);
					i++;
				}
				return sum;
			}
			double f4(double eps) {
				double prev = a(0);
				double next = a(1);
				double sum = prev + next;
				int i = 2;
				while (abs(a(i) - a(i - 1)) > eps) {
					sum += a(i);
					i++;
				}
				return sum;
			}
		}
	}
}
