//
//  FlurryPlugin.h
//  toontheatre
//
//  Created by kamal on 08/09/11.
//  Copyright 2011 Kamal. All rights reserved.
//

#import <Foundation/Foundation.h>


#ifdef PHONEGAP_FRAMEWORK
#import <PhoneGap/PGPlugin.h>
#else
#import "PGPlugin.h"
#endif

@interface FlurryPlugin:PGPlugin {
}
- (void)logPageView:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
- (void)logEvent:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;
@end