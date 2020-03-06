import { exampleFunction } from "./examplemodule.mjs";

export function init() {
    console.log("init called.");
}

export function discoverThings(info) {
    info.finish(Thing.ThingErrorNoError);
}

export function setupThing(info) {
    info.finish(Thing.ThingErrorNoError);
}

export function executeAction(info) {

}

export function thingRemoved(thing) {
}

