//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/VASInterstitialAdAdapter-Protocol.h>
#import <Funny/VASWebControllerDelegate-Protocol.h>

@class NSString, VASAdContent, VASWebController;
@protocol OS_dispatch_queue, VASInterstitialAdAdapterDelegate;

@interface VASInterstitialWebAdapter : NSObject <VASWebControllerDelegate, VASInterstitialAdAdapter>
{
    _Bool immersiveEnabled;
    _Bool _iOS10OrGreater;
    id <VASInterstitialAdAdapterDelegate> delegate;
    long long exitAnimationId;
    long long enterAnimationId;
    VASWebController *_webController;
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_queue;
    VASAdContent *_adContent;
}

+ (id)logger;
- (void).cxx_destruct;
@property(retain) VASAdContent *adContent; // @synthesize adContent=_adContent;
@property(readonly, nonatomic) _Bool iOS10OrGreater; // @synthesize iOS10OrGreater=_iOS10OrGreater;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) VASWebController *webController; // @synthesize webController=_webController;
@property(nonatomic) long long enterAnimationId; // @synthesize enterAnimationId;
@property(nonatomic) long long exitAnimationId; // @synthesize exitAnimationId;
@property(nonatomic, getter=isImmersiveEnabled) _Bool immersiveEnabled; // @synthesize immersiveEnabled;
@property __weak id <VASInterstitialAdAdapterDelegate> delegate; // @synthesize delegate;
- (void)queue_close;
- (void)queue_showFromViewController:(id)arg1;
- (void)queue_abortLoad;
- (void)queue_loadWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)queue_releaseResources;
- (id)queue_prepareWithAdContent:(id)arg1 usingAdSession:(id)arg2;
- (id)webControllerPresentingViewController;
- (void)webControllerShouldUnload;
- (void)webControllerDidResize;
- (void)webControllerDidExpand;
- (void)webControllerDidClose;
- (void)webControllerDidFailWithError:(id)arg1;
- (void)webControllerWasClicked;
- (void)webControllerDidLeaveApplication;
- (void)showFromViewController:(id)arg1;
- (void)fireImpression;
- (void)abortLoad;
- (void)loadWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)releaseResources;
- (id)prepareWithAdContent:(id)arg1 usingAdSession:(id)arg2;
- (void)initializeWebControllerWithVASAds:(id)arg1;
- (id)initWithVASAds:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

