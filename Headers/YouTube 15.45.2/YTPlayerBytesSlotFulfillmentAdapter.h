//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTFulfillmentAdapter-Protocol.h>

@class GIMMe, NSString, YTAdSlot, YTLayoutFactory;
@protocol YTFulfillmentAdapterDelegate, YTInstreamAdsController, YTOfflineAdProvider;

@interface YTPlayerBytesSlotFulfillmentAdapter : NSObject <YTFulfillmentAdapter>
{
    id <YTFulfillmentAdapterDelegate> _delegate;
    id <YTOfflineAdProvider> _offlineAdProvider;
    YTLayoutFactory *_layoutFactory;
    id <YTInstreamAdsController> _instreamAdsController;
    YTAdSlot *_slot;
    _Bool _fulfillmentCanceled;
    GIMMe *_gimme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)sendCSILogWhenAdBreakResponseReceived;
- (void)sendCSILogWhenWillRequestAdBreak;
- (id)firstForecastingAdInAds:(id)arg1;
- (void)makeOfflineAdRequestWithAdBreak:(id)arg1 andFulfillSlot:(id)arg2;
- (id)firstPrerollAdBreakInArray:(id)arg1;
- (void)fillSlot;
- (void)cancelFillingSlot;
- (id)initWithSlot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

