//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBMarketingEmailOptOutManager : NSObject
{
    // Error parsing type: , name: gdprTermsObserverMap
    // Error parsing type: , name: locationRoutes
    // Error parsing type: , name: noAuthStormcrow
    // Error parsing type: , name: stormcrowListener
    // Error parsing type: , name: canOptOutOfMarketing
    // Error parsing type: , name: featureDisabled
    // Error parsing type: , name: userDefaults
    // Error parsing type: , name: backoffTime
}

- (void).cxx_destruct;
- (id)init;
- (id)addGDPRTermsObserver:(id)arg1;
- (void)dealloc;
- (id)initWithLocationRoutes:(id)arg1 noAuthStormcrow:(id)arg2 userDefaults:(id)arg3;
@property(nonatomic, readonly) _Bool shouldShowGDPRTerms;

@end

