//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTAdapterRequirementProtocol-Protocol.h>
#import <Module_Framework/YTLayoutExitedEventListener-Protocol.h>
#import <Module_Framework/YTLayoutRenderingAdapter-Protocol.h>

@class NSString, YTAdLayout, YTAdSlot;
@protocol YTBelowPlayerCompanionRenderingAPI, YTLayoutRenderingAdapterDelegate;

@interface YTBelowPlayerCompanionLayoutRenderingAdapter : NSObject <YTLayoutRenderingAdapter, YTLayoutExitedEventListener, YTAdapterRequirementProtocol>
{
    YTAdSlot *_slot;
    YTAdLayout *_layout;
    id <YTLayoutRenderingAdapterDelegate> _layoutRenderingAdapterDelegate;
    id <YTBelowPlayerCompanionRenderingAPI> _companionRenderingAPI;
}

+ (id)adapterRequirement;
- (void).cxx_destruct;
- (void)setCompanionRenderingAPI:(id)arg1;
- (void)stopRenderingWithExitReason:(unsigned long long)arg1;
- (void)startRendering;
- (id)slot;
- (void)unload;
- (void)load;
- (id)layout;
- (void)didExitLayout:(id)arg1 forSlot:(id)arg2 exitReason:(unsigned long long)arg3;
- (id)initWithSlot:(id)arg1 layout:(id)arg2 layoutRenderingAdapterDelegate:(id)arg3 companionRenderingAPI:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

