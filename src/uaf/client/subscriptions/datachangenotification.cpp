/* This file is part of the UAF (Unified Architecture Framework) project.
 *
 * Copyright (C) 2012 Wim Pessemier (Institute of Astronomy, KULeuven)
 *
 * Project website: http://www.ster.kuleuven.be/uaf
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "uaf/client/subscriptions/datachangenotification.h"





namespace uafc
{
    using namespace uaf;
    using namespace uafc;
    using std::string;
    using std::stringstream;
    using std::vector;
    using std::size_t;





    // Constructor
    // =============================================================================================
    DataChangeNotification::DataChangeNotification()
    : MonitoredItemNotification()
    {}


    // Get a string representation
    // =============================================================================================
    string DataChangeNotification::toString(const string& indent, size_t colon) const
    {
        stringstream ss;

        ss << MonitoredItemNotification::toString(indent, colon);
        ss << "\n";
        ss << indent << " - status";
        ss << fillToPos(ss, colon);
        ss << ": " << status.toString() << "\n";
        ss << indent << " - data";
        ss << fillToPos(ss, colon);
        ss << ": " << data.toString();
        return ss.str();
    }


}



