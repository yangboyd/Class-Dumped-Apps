//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "AWEUITrackerRunner-Protocol.h"
#import "HMDUITrackable-Protocol.h"

@class HMDUITrackableContext, NSString;

@interface UIControl (BTDAdditions) <HMDUITrackable, AWEUITrackerRunner>
+ (void)hmd_startSwizzle;
+ (void)_aweLazyRegisterLoad_ParallelActionsManager;
+ (void)awe_UITracker_run;
- (id)_btd_allUIControlBlockTargets;
- (void)btd_removeActionBlocksForControlEvents:(unsigned long long)arg1;
- (void)btd_addActionBlock:(CDUnknownBlockType)arg1 forControlEvents:(unsigned long long)arg2;
- (void)hmd_sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (_Bool)hmd_trackEnaled;
- (id)rac_signalForControlEvents:(unsigned long long)arg1;
- (id)rac_channelForControlEvents:(unsigned long long)arg1 key:(id)arg2 nilValue:(id)arg3;
@property(nonatomic) _Bool awe_allowParallelActions;
- (void)awe_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)awe_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)shouldReturnTouchCancel;
- (_Bool)shouldReturnTouchBegan;
- (_Bool)shouldReturnTouchEnd;
- (void)awe_UITracker_sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMDUITrackableContext *hmd_trackContext;
@property(readonly) Class superclass;
@end

