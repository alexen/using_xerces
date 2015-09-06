///
/// main.cpp
///
/// Created on: 06 сент. 2015 г.
///     Author: alexen
///

#include <iostream>
#include <boost/exception/diagnostic_information.hpp>

#include <xercesc/util/PlatformUtils.hpp>

int main()
{
     try
     {
          xercesc::XMLPlatformUtils::Initialize();

          xercesc::XMLPlatformUtils::Terminate();
     }
     catch( const xercesc::XMLException& )
     {
     }
     catch( const std::exception& e )
     {
          std::cerr << "exception: " << boost::diagnostic_information( e ) << '\n';
          return 1;
     }

     std::cout << "Successfully done.\n";

     return 0;
}
