//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CAAnimationDelegate-Protocol.h"

@class ACCAnimatedButton, AWEGameRecordButton, IESMMCamera, NSString, UIView;
@protocol IESMMRecoderProtocol;

@interface AWEGameStickerController : UIViewController <CAAnimationDelegate>
{
    _Bool _previousKeepAlive;
    CDUnknownBlockType _gameStartBlock;
    CDUnknownBlockType _dismissBlock;
    IESMMCamera<IESMMRecoderProtocol> *_camera;
    unsigned long long _gameType;
    AWEGameRecordButton *_startButton;
    ACCAnimatedButton *_exitButton;
    UIView *_blurEffectView;
    CDUnknownBlockType _appearCompletion;
    CDUnknownBlockType _disappearCompletion;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool previousKeepAlive; // @synthesize previousKeepAlive=_previousKeepAlive;
@property(copy, nonatomic) CDUnknownBlockType disappearCompletion; // @synthesize disappearCompletion=_disappearCompletion;
@property(copy, nonatomic) CDUnknownBlockType appearCompletion; // @synthesize appearCompletion=_appearCompletion;
@property(retain, nonatomic) UIView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) ACCAnimatedButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) AWEGameRecordButton *startButton; // @synthesize startButton=_startButton;
@property(nonatomic) unsigned long long gameType; // @synthesize gameType=_gameType;
@property(retain, nonatomic) IESMMCamera<IESMMRecoderProtocol> *camera; // @synthesize camera=_camera;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType gameStartBlock; // @synthesize gameStartBlock=_gameStartBlock;
- (void)endGame;
- (void)resetGame;
- (void)resumeGame;
- (void)pauseGame;
- (void)startGame;
- (void)reportGameScoreOfOpponent;
- (void)onExitButton:(id)arg1;
- (void)onStartButton:(id)arg1;
- (id)createAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)gameDidEnd;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showOnView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;
- (id)initWithCamera:(id)arg1 gameType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

