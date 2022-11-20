import nymea


# Optional, for initialisation, if needed
def init():
    logger.log("Python mock plugin init")
    logger.warn("Python mock warning")


# Optional, clean up stuff if needed
def deinit():
    logger.log("shutting down")


# Optional, if the plugin should create auto things, this is the right place to create them,
# or, start monitoring the network (or whatever) for them to appear
def startMonitoringAutoThings():
    logger.log("Start monitoring auto things.")


# If the plugin supports things of createMethod "discovery", nymea will call this to discover things
def discoverThings(info):
    logger.log("Discovery started for", info.thingClassId)
    info.finish(nymea.ThingErrorNoError)


# If the plugin supports things with a setupMethod other than "justAdd", this will be called to initiate login/pairing
def startPairing(info):
    logger.log("startPairing for", info.thingName, info.thingId, info.params)
    info.finish(nymea.ThingErrorNoError, "Provide information for the login")


# If the plugin supports things with a setupMethod other than "justAdd", this will be called to complete login/pairing
def confirmPairing(info, username, secret):
    logger.log("confirming pairing for", info.thingName, username, secret)
    info.finish(nymea.ThingErrorAuthenticationFailure, "Error logging in here!")


# Mandatory, a new thing is being set up. Initialize (connect etc...) it
def setupThing(info):
    logger.log("setupThing for", info.thing.name)
    info.finish(nymea.ThingErrorNoError)


# Optional, run additional code after a successful thing setup
def postSetupThing(thing):
    logger.log("postSetupThing for", thing.name)


# Optional, do cleanups when a thing is removed
def thingRemoved(thing):
    logger.log("thingRemoved for", thing.name)


# If the plugin supports things with actions, nymea will call this to run actions
def executeAction(info):
    logger.log("executeAction for", info.thing.name, info.actionTypeId, "with params", info.params)
    info.finish(nymea.ThingErrorNoError)

