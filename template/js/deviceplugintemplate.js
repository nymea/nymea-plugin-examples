import { exampleFunction } from "./examplemodule.mjs";

export function init() {
    console.log("init called.");
}

export function startMonitoringAutoDevices() {

}

export function discoverDevices(info) {
    info.finish(Device.DeviceErrorNoError);
}

export function setupDevice(info) {
    info.finish(Device.DeviceErrorNoError);
}

export function postSetupDevice(device) {

}

export function executeAction(info) {

}

export function deviceRemoved(device) {
}

