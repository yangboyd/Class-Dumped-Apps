//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IAContentController.h>

#import <Funny/IAInterfaceBuilder-Protocol.h>
#import <Funny/IAVideoContentControllerBuilder-Protocol.h>

@class NSString;
@protocol IAInterfaceVideoController, IAVideoContentDelegate;

@interface IAVideoContentController : IAContentController <IAInterfaceBuilder, IAVideoContentControllerBuilder>
{
    _Bool _muted;
    id <IAVideoContentDelegate> _videoContentDelegate;
    id <IAInterfaceVideoController> _viewController;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
+ (id)build:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <IAInterfaceVideoController> viewController; // @synthesize viewController=_viewController;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) __weak id <IAVideoContentDelegate> videoContentDelegate; // @synthesize videoContentDelegate=_videoContentDelegate;
- (void)dealloc;
- (_Bool)isVPAID;
- (_Bool)shouldCloseAdAfterClick;
- (void)performAdSwitchWithCompletion:(CDUnknownBlockType)arg1;
- (void)linkClicked:(id)arg1 clickTrackers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAd;
- (void)willReportImpression;
- (void)didClick;
- (void)videoProgressUpdatedWithCurrentTime:(double)arg1 totalTime:(double)arg2;
- (void)videoDurationUpdated:(double)arg1;
- (void)videoInterruptedWithError:(id)arg1;
- (void)videoCompleted;
- (void)isReady;
- (void)pause;
- (void)play;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

