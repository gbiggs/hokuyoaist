/* HokuyoAIST
 *
 * Header file for the port wrapper object.
 *
 * Copyright 2008-2011 Geoffrey Biggs geoffrey.biggs@aist.go.jp
 *     RT-Synthesis Research Group
 *     Intelligent Systems Research Institute,
 *     National Institute of Advanced Industrial Science and Technology (AIST),
 *     Japan
 *     All rights reserved.
 *
 * This file is part of HokuyoAIST.
 *
 * HokuyoAIST is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License,
 * or (at your option) any later version.
 *
 * HokuyoAIST is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with HokuyoAIST. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#if !defined(PORT_WRAPPER_H_)
#define PORT_WRAPPER_H_

#include <boost/asio.hpp>

#if defined(WIN32)
    typedef unsigned char           uint8_t;
    typedef unsigned int            uint32_t;
    #if defined(HOKUYOAIST_STATIC)
        #define HOKUYOAIST_EXPORT
    #elif defined(hokuyoaist_EXPORTS)
        #define HOKUYOAIST_EXPORT       __declspec(dllexport)
    #else
        #define HOKUYOAIST_EXPORT       __declspec(dllimport)
    #endif
#else
    #include <stdint.h>
    #define HOKUYOAIST_EXPORT
#endif

namespace hokuyoaist
{
    namespace port
    {
        /** \brief Base class for the PortWrapper object.
         *
         * This class provides a non-templated base that can be used
        class HOKUYOAIST_EXPORT PortWrapperBase
        {
        }; // class PortWrapperBase


        class HOKUYOAIST_EXPORT PortWrapper
        {
            public:

            private:
                boost::asio::io_service io_;
                boost::asio::basic_io_object *port_;
        }; // class PortWrapper
    }; // namespace port
}; // namespace hokuyoaist

#endif // PORT_WRAPPER_H_

