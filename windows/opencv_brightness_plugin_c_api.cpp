#include "include/opencv_brightness/opencv_brightness_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "opencv_brightness_plugin.h"

void OpencvBrightnessPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  opencv_brightness::OpencvBrightnessPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
