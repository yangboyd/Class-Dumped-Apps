//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class InteractiveDataModel, NFIScene, NFISoundManager, NSDate, NSMutableArray, NSTimer, UIView;
@protocol NFISceneManagerDelegate;

@interface NFISceneManager : NSObject
{
    id <NFISceneManagerDelegate> _delegate;
    InteractiveDataModel *_model;
    UIView *_presentingView;
    NFIScene *_currentScene;
    NSMutableArray *_sceneIdentifiers;
    NFISoundManager *_soundManager;
    NSTimer *_countdownTimer;
    NSDate *_timerStartDate;
    double _timerOffset;
}

@property double timerOffset; // @synthesize timerOffset=_timerOffset;
@property(retain, nonatomic) NSDate *timerStartDate; // @synthesize timerStartDate=_timerStartDate;
@property(nonatomic) __weak NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) NFISoundManager *soundManager; // @synthesize soundManager=_soundManager;
@property(retain, nonatomic) NSMutableArray *sceneIdentifiers; // @synthesize sceneIdentifiers=_sceneIdentifiers;
@property(retain, nonatomic) NFIScene *currentScene; // @synthesize currentScene=_currentScene;
@property(nonatomic) __weak UIView *presentingView; // @synthesize presentingView=_presentingView;
@property(readonly, nonatomic) InteractiveDataModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <NFISceneManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleEnterForegroundNotification:(id)arg1;
- (void)handleEnterBackgroundNotification:(id)arg1;
- (void)playSequence:(id)arg1 statusResponder:(CDUnknownBlockType)arg2;
- (void)playSequence:(id)arg1;
- (void)playSound:(id)arg1 statusResponder:(CDUnknownBlockType)arg2;
- (void)playSound:(id)arg1;
- (void)setSceneTitle:(id)arg1;
- (void)timerUpdate:(id)arg1;
- (void)invalidateCountdownTimer;
- (void)timerWithFireDate:(id)arg1;
- (void)startCountdownTimer;
- (void)playVideoWithPlaybackRequest:(id)arg1;
- (void)removeCurrentSceneWithSceneData:(id)arg1;
- (void)addScene:(id)arg1;
- (void)presentScene:(id)arg1;
- (id)scenes;
- (void)transtionToDefaultPostPlay;
- (void)previousScene;
- (void)transitionToSceneWithSceneIdentifier:(long long)arg1 sceneData:(id)arg2;
- (void)transitionToSceneWithSceneIdentifier:(long long)arg1;
- (id)initWithViewPort:(id)arg1 model:(id)arg2;

@end

