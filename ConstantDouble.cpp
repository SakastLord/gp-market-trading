/***************************************************************************
 * (c) 2008-2011 Aleksandar Topuzović                                      *
 * <aleksandar.topuzovic@fer.hr>, <aleksandar.topuzovic@gmail.com>         *
 ***************************************************************************/
#include "beagle/GP.hpp"
#include "ConstantDouble.hpp"

#include <cmath>
#include <fstream>

using namespace Beagle;


ConstantDouble::ConstantDouble(Beagle::Double::Handle inValue) :
  GP::EphemeralT<Beagle::Double>(inValue, "K")
{ }

GP::Primitive::Handle ConstantDouble::generate(Beagle::string inName, GP::Context& ioContext)
{
  Double::Handle lValue = new Double(ioContext.getSystem().getRandomizer().rollUniform(-1000.,1000.));
  return new ConstantDouble(lValue);
}
