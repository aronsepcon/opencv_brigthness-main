//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <opencv_brightness/opencv_brightness_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) opencv_brightness_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "OpencvBrightnessPlugin");
  opencv_brightness_plugin_register_with_registrar(opencv_brightness_registrar);
}
