/*
   Copyright (C) 2014 Samsung Electronics

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef ExceededDatabaseQuotaPermissionPopup_h
#define ExceededDatabaseQuotaPermissionPopup_h

#if ENABLE(TIZEN_SQL_DATABASE)

#include "PermissionPopup.h"

namespace WebKit {

class ExceededDatabaseQuotaPermissionPopup : public PermissionPopup {
public:
    ExceededDatabaseQuotaPermissionPopup(const Ewk_Security_Origin* origin, const String& message);
    ~ExceededDatabaseQuotaPermissionPopup() { }

    virtual void sendDecidedPermission(Evas_Object*, bool isDecided) OVERRIDE;
};

} // namespace WebKit

#endif // ENABLE(TIZEN_SQL_DATABASE)

#endif // ExceededDatabaseQuotaPermissionPopup_h
