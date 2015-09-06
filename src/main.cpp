///
/// main.cpp
///
/// Created on: 06 сент. 2015 г.
///     Author: alexen
///

#include <iostream>
#include <boost/exception/diagnostic_information.hpp>

#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/util/XMLString.hpp>

int main()
{
     try
     {
          xercesc::XMLPlatformUtils::Initialize();

          xercesc::XMLPlatformUtils::Terminate();
     }
     catch( const xercesc::XMLException& e )
     {
          char* message = xercesc::XMLString::transcode( e.getMessage() );
          std::cerr << "XML exception: " << message << '\n';
          xercesc::XMLString::release( &message );
     }
     catch( const std::exception& e )
     {
          std::cerr << "exception: " << boost::diagnostic_information( e ) << '\n';
          return 1;
     }

     std::cout << "Successfully done.\n";

     return 0;
}
