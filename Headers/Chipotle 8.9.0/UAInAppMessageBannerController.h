//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Airship/UIGestureRecognizerDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, NSTimer, UAInAppMessageBannerDisplayContent, UAInAppMessageBannerStyle, UAInAppMessageBannerView, UAInAppMessageMediaView, UIPanGestureRecognizer;

@interface UAInAppMessageBannerController : NSObject <UIGestureRecognizerDelegate>
{
    _Bool _isShowing;
    _Bool _swipeDetected;
    _Bool _tapDetected;
    _Bool _longPressDetected;
    NSString *_messageID;
    UAInAppMessageBannerDisplayContent *_displayContent;
    UAInAppMessageBannerStyle *_style;
    UAInAppMessageMediaView *_mediaView;
    UAInAppMessageBannerView *_bannerView;
    NSLayoutConstraint *_verticalConstraint;
    UIPanGestureRecognizer *_panGestureRecognizer;
    NSTimer *_dismissalTimer;
    CDUnknownBlockType _showCompletionHandler;
}

+ (id)bannerControllerWithBannerMessageID:(id)arg1 displayContent:(id)arg2 mediaView:(id)arg3 style:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool longPressDetected; // @synthesize longPressDetected=_longPressDetected;
@property(nonatomic) _Bool tapDetected; // @synthesize tapDetected=_tapDetected;
@property(nonatomic) _Bool swipeDetected; // @synthesize swipeDetected=_swipeDetected;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(copy, nonatomic) CDUnknownBlockType showCompletionHandler; // @synthesize showCompletionHandler=_showCompletionHandler;
@property(retain, nonatomic) NSTimer *dismissalTimer; // @synthesize dismissalTimer=_dismissalTimer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *verticalConstraint; // @synthesize verticalConstraint=_verticalConstraint;
@property(retain, nonatomic) UAInAppMessageBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UAInAppMessageMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) UAInAppMessageBannerStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UAInAppMessageBannerDisplayContent *displayContent; // @synthesize displayContent=_displayContent;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (void)dealloc;
- (void)finishTeardown;
- (void)beginTeardown;
- (void)teardown;
- (void)timerFired;
- (void)scheduleDismissalTimer;
- (void)observeAppState;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (void)orientationChanged:(id)arg1;
- (void)refreshViewForCurrentOrientation;
- (void)longPressWithGestureRecognizer:(id)arg1;
- (void)tapWithGestureRecognizer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)panWithGestureRecognizer:(id)arg1;
- (void)initializeGestureRecognizersWithBannerView:(id)arg1 parentView:(id)arg2;
- (void)bannerView:(id)arg1 animateOutWithParentView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)bannerView:(id)arg1 animateInWithParentView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addInitialConstraintsToParentView:(id)arg1 bannerView:(id)arg2 placement:(long long)arg3;
- (void)buttonTapped:(id)arg1;
- (void)messageSwiped;
- (void)messageTapped;
- (void)dismissWithResolution:(id)arg1;
- (void)showWithParentView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sceneRemoved:(id)arg1;
- (void)observeSceneEvents;
- (id)initWithBannerMessageID:(id)arg1 displayContent:(id)arg2 mediaView:(id)arg3 style:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

