//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTExternallyManagedSlotAdapter-Protocol.h>

@class NSString, YTAdLayout, YTAdSlot, YTAdsControlFlowIDGenerator;
@protocol YTExternallyManagedSlotAdapterDelegate;

@interface YTMDXInPlayerExternallyManagedSlotAdapter : NSObject <YTExternallyManagedSlotAdapter>
{
    id <YTExternallyManagedSlotAdapterDelegate> _delegate;
    YTAdSlot *_slot;
    YTAdLayout *_layout;
    YTAdsControlFlowIDGenerator *_IDGenerator;
    NSString *_adVideoID;
}

- (void).cxx_destruct;
- (id)layout;
- (id)slot;
- (void)sendMediaLayoutFinishEvent:(long long)arg1;
- (void)sendMediaLayoutStartEvent;
- (void)didFinishMediaLayout:(id)arg1 completeType:(long long)arg2;
- (void)didStartMediaLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

