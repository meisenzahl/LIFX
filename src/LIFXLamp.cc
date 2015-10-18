#include <LIFXLamp.h>

LIFXLamp::LIFXLamp() {}

std::string LIFXLamp::getID()
{
	return ID;
}

std::string LIFXLamp::getUUID()
{
	return UUID;
}

std::string LIFXLamp::getLabel()
{
	return Label;
}

bool LIFXLamp::isConnected()
{
	return Connected;
}

std::string LIFXLamp::getPower()
{
	return Power;
}

double LIFXLamp::getBrightness()
{
	return Brightness;
}

std::string LIFXLamp::getLastSeen()
{
	return LastSeen;
}

double LIFXLamp::getSecondsSinceSeen()
{
	return SecondsSinceSeen;
}

LIFXColor LIFXLamp::getColor()
{
	return Color;
}

LIFXGroup LIFXLamp::getGroup()
{
	return Group;
}

LIFXLocation LIFXLamp::getLocation()
{
	return Location;
}

LIFXProduct LIFXLamp::getProduct()
{
	return Product;
}

void LIFXLamp::setID(std::string ID)
{
	this->ID = ID;
}

void LIFXLamp::setUUID(std::string UUID)
{
	this->UUID = UUID;
}

void LIFXLamp::setLabel(std::string Label)
{
	this->Label = Label;
}

void LIFXLamp::setConnected(bool Connected)
{
	this->Connected = Connected;
}

void LIFXLamp::setPower(std::string Power)
{
	this->Power = Power;
}

void LIFXLamp::setBrightness(double Brightness)
{
	this->Brightness = Brightness;
}

void LIFXLamp::setLastSeen(std::string LastSeen)
{
	this->LastSeen = LastSeen;
}

void LIFXLamp::setSecondsSinceSeen(double SecondsSinceSeen)
{
	this->SecondsSinceSeen = SecondsSinceSeen;
}

void LIFXLamp::setColor(LIFXColor Color)
{
	this->Color = Color;
}

void LIFXLamp::setGroup(LIFXGroup Group)
{
	this->Group = Group;
}

void LIFXLamp::setLocation(LIFXLocation Location)
{
	this->Location = Location;
}

void LIFXLamp::setProduct(LIFXProduct Product)
{
	this->Product = Product;
}
