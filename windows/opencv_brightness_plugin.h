#ifndef FLUTTER_PLUGIN_OPENCV_BRIGHTNESS_PLUGIN_H_
#define FLUTTER_PLUGIN_OPENCV_BRIGHTNESS_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace opencv_brightness {

class OpencvBrightnessPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  OpencvBrightnessPlugin();

  virtual ~OpencvBrightnessPlugin();

  // Disallow copy and assign.
  OpencvBrightnessPlugin(const OpencvBrightnessPlugin&) = delete;
  OpencvBrightnessPlugin& operator=(const OpencvBrightnessPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace opencv_brightness

#endif  // FLUTTER_PLUGIN_OPENCV_BRIGHTNESS_PLUGIN_H_
