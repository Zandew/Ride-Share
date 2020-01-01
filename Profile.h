#include <iostream>
#include <vector>
#include "Ride.h"

using namespace std;

class Profile{
	protected:
		string name;
		double balance;
		vector<Ride> rides;
	public:
		Profile(string name);
		~Profile();
		void addRide(Ride ride);
		void payRide(int idx);
};
