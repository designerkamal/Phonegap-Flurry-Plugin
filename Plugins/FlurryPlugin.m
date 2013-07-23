//
//  FlurryPlugin.m
//  toontheatre
//
//  Created by kamal on 08/09/11.
//  Copyright 2011 Kamal. All rights reserved.
//

#import "FlurryPlugin.h"
#import "FlurryAnalytics.h"

@implementation FlurryPlugin

- (void)logEvent:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options  
{
    NSLog(@"Logging event for %@",[arguments objectAtIndex:1]);
    [FlurryAnalytics logEvent:[arguments objectAtIndex:1]];
}
- (void)logPageView:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options  
{
    NSLog(@"Logging pageView");
    [FlurryAnalytics logPageView];
	NSLog(@"PageView logged");
}
@end
