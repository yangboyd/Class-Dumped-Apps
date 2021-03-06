//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ACCCaptureButtonAnimationProtocol-Protocol.h"

@class AWEAnimatedRecordButton, NSString, UIButton;
@protocol AWECaptureButtonAnimationViewDelegate;

@interface AWECaptureButtonAnimationView : UIView <ACCCaptureButtonAnimationProtocol>
{
    _Bool _isShowingCaptureAnimating;
    UIButton *_captureButton;
    UIButton *_captureShowTipButton;
    id <AWECaptureButtonAnimationViewDelegate> _delegate;
    long long _recordMode;
    unsigned long long _mixSubtype;
    CDUnknownBlockType _trackRecordVideoEventBlock;
    long long _restoredRecordMode;
    AWEAnimatedRecordButton *_aniamtedRecordButton;
    struct CGPoint _touchBeginPoint;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint touchBeginPoint; // @synthesize touchBeginPoint=_touchBeginPoint;
@property(retain, nonatomic) AWEAnimatedRecordButton *aniamtedRecordButton; // @synthesize aniamtedRecordButton=_aniamtedRecordButton;
@property(nonatomic) long long restoredRecordMode; // @synthesize restoredRecordMode=_restoredRecordMode;
@property(nonatomic) _Bool isShowingCaptureAnimating; // @synthesize isShowingCaptureAnimating=_isShowingCaptureAnimating;
@property(copy, nonatomic) CDUnknownBlockType trackRecordVideoEventBlock; // @synthesize trackRecordVideoEventBlock=_trackRecordVideoEventBlock;
@property(nonatomic) unsigned long long mixSubtype; // @synthesize mixSubtype=_mixSubtype;
@property(nonatomic) long long recordMode; // @synthesize recordMode=_recordMode;
@property(nonatomic) __weak id <AWECaptureButtonAnimationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *captureShowTipButton; // @synthesize captureShowTipButton=_captureShowTipButton;
@property(nonatomic) __weak UIButton *captureButton; // @synthesize captureButton=_captureButton;
- (void)layoutSubviews;
- (void)restoreMode;
- (void)checkNormalImageForButton:(id)arg1 setAlpha:(double)arg2;
- (void)switchToHoldSubtype;
- (_Bool)isAccordWithMixHoldTapAndMixSubtypeHold;
- (_Bool)isAccordWithMixHoldTapAndMixSubtypeTap;
- (void)switchToMixHoldTapRecordMode:(long long)arg1;
- (void)switchToCountdownMode;
- (void)switchToMode:(long long)arg1;
- (void)stop;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateAniamtedRecordButtonCenter:(struct CGPoint)arg1;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool animationEnabled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

