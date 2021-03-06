//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PRMTimerCollectible, UIViewController;
@protocol DYNAlertManagerService, DYNExperimentsService, DYNLightboxService, DYNProjectorService, DYNSharedLayerService, GIPAccountID;

@interface DYNMessageViewNavigationHelper : NSObject
{
    id <GIPAccountID> _accountID;
    _Bool _shouldUpdateFirstResponder;
    id <DYNLightboxService> _lightboxService;
    id <DYNProjectorService> _projectorService;
    id <DYNExperimentsService> _experimentService;
    id <DYNAlertManagerService> _alertManagerService;
    id <DYNSharedLayerService> _sharedLayerService;
    PRMTimerCollectible *_latencyTimer;
    UIViewController *_fromViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
- (void)stopLatencyTimer;
- (void)startLatencyTimerWithEvent:(id)arg1;
- (void)logAnalyticsEventWithType:(unsigned int)arg1;
- (void)openURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateFirstResponderIfNeeded;
- (void)openURL:(id)arg1 withRedirectorURLString:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openVideoWithURLString:(id)arg1;
- (void)openVideoCallWithMetadata:(id)arg1;
- (void)openWebLinkImageWithMetadata:(id)arg1;
- (void)openWebLinkWithMetadata:(id)arg1;
- (void)openBlobFileWithMetadata:(id)arg1;
- (void)openDriveFileWithMetadata:(id)arg1;
- (void)sendFeedbackRegardingMessage:(id)arg1;
- (void)exitGroupWithToast:(id)arg1;
- (id)initWithAccountID:(id)arg1 fromViewController:(id)arg2 shouldUpdateFirstResponder:(_Bool)arg3;

@end

