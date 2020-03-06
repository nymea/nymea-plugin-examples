/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                         *
 *  Copyright (C) 2019 Developer Name <developer.name@example.com>         *
 *                                                                         *
 *  This file is part of nymea.                                            *
 *                                                                         *
 *  This library is free software; you can redistribute it and/or          *
 *  modify it under the terms of the GNU Lesser General Public             *
 *  License as published by the Free Software Foundation; either           *
 *  version 2.1 of the License, or (at your option) any later version.     *
 *                                                                         *
 *  This library is distributed in the hope that it will be useful,        *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
 *  Lesser General Public License for more details.                        *
 *                                                                         *
 *  You should have received a copy of the GNU Lesser General Public       *
 *  License along with this library; If not, see                           *
 *  <http://www.gnu.org/licenses/>.                                        *
 *                                                                         *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "plugininfo.h"
#include "integrationplugintemplate.h"

IntegrationPluginExample::IntegrationPluginExample()
{

}

void IntegrationPluginExample::init()
{
    // Initialize/create objects
}

void  IntegrationPluginExample::setupThing(ThingSetupInfo *info)
{
    qCDebug(dcTemplate()) << "Setup thing" << info->thing()->name() << info->thing()->params();

    info->finish(Thing::ThingErrorNoError);
}

void IntegrationPluginExample::executeAction(ThingActionInfo *info)
{
    qCDebug(dcTemplate()) << "Executing action for thing" << info->thing()->name() << action.actionTypeId().toString() << action.params();

    info->finish(Thing::ThingErrorNoError);
}

void IntegrationPluginExample::thingRemoved(Thing *thing)
{
    qCDebug(dcTemplate()) << "Remove thing" << thing->name() << thing->params();

    // Clean up all data related to this thing
}
