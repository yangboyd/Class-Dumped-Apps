//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface DCDHomeIndicator : NSObject <RCTBridgeModule>
{
}

+ (const struct RCTMethodInfo *)__rct_export__440;
+ (void)load;
+ (id)moduleName;
+ (_Bool)requiresMainQueueSetup;
- (void)setPrefersAutoHidden:(_Bool)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (id)getHomeIndicatorViewController;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

