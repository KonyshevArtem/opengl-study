#if defined(TARGET_IOS) || defined(TARGET_TVOS)
@import UIKit;
#define PlatformViewController UIViewController
#else
@import AppKit;
#define PlatformViewController NSViewController
#endif

@import MetalKit;

#import "AAPLMetalRenderer.h"

@interface AAPLMetalViewController : PlatformViewController

@end
