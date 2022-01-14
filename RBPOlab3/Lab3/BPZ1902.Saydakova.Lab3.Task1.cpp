module BPZ1902.Saydakova.Lab3.Task1;

namespace RBPO {
	namespace Lab3 {
		namespace Task1 {
			double f1(double x) {
				return (((x + 2) / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - (sqrt(2))) / (x + 2));
			}
			double f2(double x) {
				return (x > -3) ? (log(x+3)/(x*x+9)):(-x*x-1.1*x+9);
			}
			double a(int i) {
				return  (pow(-1.0, i) * ( (i+1) / (double)(i*i*+1)));	
			}
			double f3(int n) {
				double sum = 0.0;
				for (int i = 0; i <= n; i++) {
					sum += a(i);
				}
				return sum;
			}
			double f4(double eps) {
				double prev = a(0);
				double next = a(1);
				double sum = prev+next;
				for (int i = 2; abs(a(i) - a(i - 1)) > eps; i++) {
					sum += a(i);
				}
				return sum;
			}
		}
	}
}
