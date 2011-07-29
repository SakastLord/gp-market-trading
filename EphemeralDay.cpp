/***************************************************************************
 * (c) 2008-2011 Aleksandar Topuzović                                      *
 * <aleksandar.topuzovic@fer.hr>, <aleksandar.topuzovic@gmail.com>         *
 ***************************************************************************/
#include "beagle/GP.hpp"
#include "EphemeralDay.hpp"

#include <cmath>
#include <fstream>

using namespace Beagle;


EphemeralDay::EphemeralDay(Beagle::UInt::Handle inValue) :
  GP::EphemeralT<Beagle::UInt>(inValue, "D")
{ }

GP::Primitive::Handle EphemeralDay::generate(Beagle::string inName, GP::Context& ioContext)
{
  UInt::Handle lValue = new UInt((unsigned int)ioContext.getSystem().getRandomizer().rollUniform(0.,260.));
  return new EphemeralDay(lValue);
}
