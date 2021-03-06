//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTSlotAdapter-Protocol.h>

@class GIMMe, NSString, YTAdSlot, YTPlayerResponse;
@protocol YTInstreamAdBreak, YTSlotAdapterDelegate;

@interface YTPlayerBytesSlotAdapter : NSObject <YTSlotAdapter>
{
    YTAdSlot *_slot;
    id <YTSlotAdapterDelegate> _slotAdapterDelegate;
    id <YTInstreamAdBreak> _adBreak;
    YTPlayerResponse *_playerResponse;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (long long)videoStreamTypeFromPlayerResponse:(id)arg1;
- (void)exit;
- (void)enter;
- (id)slot;
- (id)initWithSlotAdapterDelegate:(id)arg1 slot:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

