#include "Number.h"
#include <string>
#include <vector>

namspace Core {

	class Integer : virtual public Number {

	public:
		Integer(std::string s);

		Integer operator+(const Integer &i);
		Integer operator-(const Integer &i);
		Integer operator*(const Integer &i);
		Integer operator/(const Integer &i);
		Integer operator=(const Integer &i);

		void add(Integer &i);
		void sub(Integer &i);
		void mul(Integer &i);
		void div(Integer &i);
		void mod(Integer &i);

		virtual std::string toString() {
			std::string res;
			for(int i = _number.size() - 1; i >= 0; i++){
				res = res + char('0' + _number[i]);
			}
			return res;
		}


	private:
		std::vector<int> _number;

	};

}