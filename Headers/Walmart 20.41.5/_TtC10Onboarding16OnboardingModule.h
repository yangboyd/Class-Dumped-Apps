//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC10Onboarding16OnboardingModule : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: router
    // Error parsing type: , name: analyticsProvider
    // Error parsing type: , name: notificationsProvider
    // Error parsing type: , name: landingApiProvider
    // Error parsing type: , name: locationProvider
    // Error parsing type: , name: idfaTrackingProvider
    // Error parsing type: , name: infoProvider
    // Error parsing type: , name: platformProvider
    // Error parsing type: , name: ccmProvider
    // Error parsing type: , name: waitlistApiProvider
}

- (void).cxx_destruct;
- (id)init;
- (void)applicationDidReceiveMemoryWarning;
- (void)applicationWillTerminate;
- (void)startup:(id)arg1;
- (id)pluginAPI;
- (id)initWithContainerBundleID:(id)arg1;
@property(nonatomic, copy) NSArray *dependencies;
@property(nonatomic, readonly) NSString *identifier;

@end

