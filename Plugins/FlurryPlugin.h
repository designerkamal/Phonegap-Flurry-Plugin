//
//  FlurryPlugin.h
//  toontheatre
//
//  Created by kamal on 08/09/11.
//  Copyright 2011 Kamal. All rights reserved.
//

#import <Foundation/Foundation.h>


#ifdef CORDOVA_FRAMEWORK
#import <Cordova/CDVPlugin.h>
#else
#import "CDVPlugin.h"
#endif

@interface FlurryPlugin:CDVPlugin {
}
- (void)logPageView:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void)logEvent:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
@end
