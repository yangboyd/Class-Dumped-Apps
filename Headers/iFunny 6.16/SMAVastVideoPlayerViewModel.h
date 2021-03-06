//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAVastVideoPlayerDelegate-Protocol.h>

@class NSString, SMAObservable;

@interface SMAVastVideoPlayerViewModel : NSObject <SMAVastVideoPlayerDelegate>
{
    double _expectedVideoDuration;
    SMAObservable *_neededUIElements;
    SMAObservable *_mutedObservable;
    SMAObservable *_volumeObservable;
    SMAObservable *_pausedObservable;
    SMAObservable *_progressPercentageObservable;
    CDUnknownBlockType _callbackBlock;
    CDUnknownBlockType _onStart;
    CDUnknownBlockType _onDidFinish;
    CDUnknownBlockType _onClick;
    CDUnknownBlockType _onSkip;
    CDUnknownBlockType _onPlayerError;
}

@property(copy, nonatomic) CDUnknownBlockType onPlayerError; // @synthesize onPlayerError=_onPlayerError;
@property(copy, nonatomic) CDUnknownBlockType onSkip; // @synthesize onSkip=_onSkip;
@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
@property(copy, nonatomic) CDUnknownBlockType onDidFinish; // @synthesize onDidFinish=_onDidFinish;
@property(copy, nonatomic) CDUnknownBlockType onStart; // @synthesize onStart=_onStart;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(retain, nonatomic) SMAObservable *progressPercentageObservable; // @synthesize progressPercentageObservable=_progressPercentageObservable;
@property(retain, nonatomic) SMAObservable *pausedObservable; // @synthesize pausedObservable=_pausedObservable;
@property(retain, nonatomic) SMAObservable *volumeObservable; // @synthesize volumeObservable=_volumeObservable;
@property(retain, nonatomic) SMAObservable *mutedObservable; // @synthesize mutedObservable=_mutedObservable;
@property(retain, nonatomic) SMAObservable *neededUIElements; // @synthesize neededUIElements=_neededUIElements;
@property(nonatomic) double expectedVideoDuration; // @synthesize expectedVideoDuration=_expectedVideoDuration;
- (void).cxx_destruct;
- (void)videoPlayerDidResume:(id)arg1;
- (void)videoPlayerDidPause:(id)arg1;
- (void)videoPlayer:(id)arg1 didFinishPercentageOfVideo:(double)arg2;
- (void)videoPlayerDidFinish:(id)arg1;
- (void)videoPlayerDidStart:(id)arg1;
- (void)videoPlayer:(id)arg1 didFailWithError:(id)arg2;
- (void)videoPlayerIsReadyToPlayVideo:(id)arg1;
- (void)showSkipButton:(id)arg1 afterDelay:(double)arg2;
- (void)muteButtonClicked:(id)arg1;
- (id)init;
- (id)onPlayerError:(CDUnknownBlockType)arg1;
- (id)onSkip:(CDUnknownBlockType)arg1;
- (id)onClick:(CDUnknownBlockType)arg1;
- (id)onDidFinish:(CDUnknownBlockType)arg1;
- (id)onStart:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

