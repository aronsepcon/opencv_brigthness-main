#import "OpencvBrightnessPlugin.h"
#import <opencv2/opencv.hpp>

@implementation OpencvBrightnessPlugin

+ (void)registerWithRegistrar:(NSObject<FlutterPluginRegistrar>*)registrar {
  FlutterMethodChannel* channel = [FlutterMethodChannel
      methodChannelWithName:@"opencv_brightness"
            binaryMessenger:[registrar messenger]];
  OpencvBrightnessPlugin* instance = [[OpencvBrightnessPlugin alloc] init];
  [registrar addMethodCallDelegate:instance channel:channel];
}

- (void)handleMethodCall:(FlutterMethodCall*)call result:(FlutterResult)result {
  if ([@"adjustBrightness" isEqualToString:call.method]) {
    // Implementar ajuste de brillo usando OpenCV
    // Aquí se debería procesar la imagen usando OpenCV
    result([self adjustBrightness:call.arguments]);
  } else {
    result(FlutterMethodNotImplemented);
  }
}

- (id)adjustBrightness:(id)args {
  // Implementar la lógica de ajuste de brillo usando OpenCV
  // Esta función debe recibir los argumentos adecuados y retornar el resultado procesado
  return nil;
}

@end