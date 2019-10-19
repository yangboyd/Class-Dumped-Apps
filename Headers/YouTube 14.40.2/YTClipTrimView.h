//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTEditTrimViewProtocol.h"
#import "YTPageStyling.h"

@class AVAsset, NSString, YTClipTrimHandleView, YTClipTrimRulerView, YTLabel;

@interface YTClipTrimView : UIView <YTPageStyling, YTEditTrimViewProtocol>
{
    YTClipTrimRulerView *_rulerView;
    UIView *_topBorder;
    UIView *_bottomBorder;
    UIView *_leftShadeView;
    UIView *_rightShadeView;
    double _leftPercentage;
    double _rightPercentage;
    YTLabel *_clipLengthLabel;
    UIView *_playHeadView;
    YTLabel *_playHeadTimeLabel;
    AVAsset *_asset;
    double _zoomFactor;
    YTClipTrimHandleView *_leftTrimHandle;
    YTClipTrimHandleView *_rightTrimHandle;
    NSString *_clipLengthTemplate;
    double _defaultClipLength;
    double _mediaTime;
    double _totalTime;
}

+ (double)desiredHeight;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double mediaTime; // @synthesize mediaTime=_mediaTime;
@property(nonatomic) double defaultClipLength; // @synthesize defaultClipLength=_defaultClipLength;
@property(copy, nonatomic) NSString *clipLengthTemplate; // @synthesize clipLengthTemplate=_clipLengthTemplate;
@property(retain, nonatomic) YTClipTrimHandleView *rightTrimHandle; // @synthesize rightTrimHandle=_rightTrimHandle;
@property(retain, nonatomic) YTClipTrimHandleView *leftTrimHandle; // @synthesize leftTrimHandle=_leftTrimHandle;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)updatePlayHead;
- (void)updateLengthLabel:(double)arg1;
- (void)positionDecorationViews;
- (id)createBorderView;
- (id)createShadeView;
- (void)setTrimHandleColor:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)didUpdateTimeRange:(CDStruct_5c5366e1)arg1;
- (void)didEndInteractionWithTrimHandle:(id)arg1;
- (void)didBeginInteractionWithTrimHandle:(id)arg1;
- (void)positionTrimHandlesWithLeftTrimPercentage:(double)arg1 rightTrimPercentage:(double)arg2 zoomSide:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)animateToStart:(double)arg1 end:(double)arg2 animationFocusPoint:(struct CGPoint)arg3 zoom:(_Bool)arg4;
- (double)maximumRightTrimHandlePosition;
- (double)minimumLeftTrimHandlePosition;
- (double)trimHandleWidth;
- (void)trimHandle:(id)arg1 isLongPressing:(_Bool)arg2;
- (void)trimHandle:(id)arg1 isPanning:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

