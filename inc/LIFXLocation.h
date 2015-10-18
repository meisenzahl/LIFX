#ifndef LIFX_LOCATION_H_
#define LIFX_LOCATION_H_

#include <string>

class LIFXLocation {
	public:
		LIFXLocation();
		LIFXLocation(std::string ID);
		LIFXLocation(std::string ID, std::string Name);

		std::string getID();
		std::string getName();

		void setID(std::string ID);
		void setName(std::string Name);

	private:
		std::string ID, Name;
};

#endif /* LIFX_LOCATION_H_ */
