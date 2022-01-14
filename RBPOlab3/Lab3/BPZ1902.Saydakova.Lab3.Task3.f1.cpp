module BPZ1902.Saydakova.Lab3.Task3;

namespace RBPO {
	namespace Lab3 {
		namespace Task3 {
			double f1(double x) {
				return (((x + 2) / (sqrt(2 * x))) - (x / (sqrt(2 * x) + 2)) + (2 / (x - sqrt(2 * x)))) * ((sqrt(x) - (sqrt(2))) / (x + 2));
			}
		}
	}
}