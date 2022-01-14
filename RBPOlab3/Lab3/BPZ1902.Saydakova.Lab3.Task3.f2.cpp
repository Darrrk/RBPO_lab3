module BPZ1902.Saydakova.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f2(double x) {
				if (x > -3) {
					return log(x + 3) / (x * x + 9);
				}
				else {
					return -x * x - 1.1 * x + 9;
				}
			}
		}
	}
}