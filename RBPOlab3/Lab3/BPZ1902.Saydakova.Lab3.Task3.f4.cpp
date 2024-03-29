module BPZ1902.Saydakova.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f4(double eps) {
				double prev = a(0);
				double next = a(1);
				double sum = prev + next;
				int i = 2;
				do {
					sum += a(i);
					i++;
				} while (abs(a(i) - a(i - 1)) > eps);
				return sum;
			}
		}
	}
}