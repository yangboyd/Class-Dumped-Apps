//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface MOPUBReplayView : UIView
{
    CDUnknownBlockType _actionBlock;
    UIView *_overlayView;
    UIButton *_replayVideoButton;
}

@property(retain, nonatomic) UIButton *replayVideoButton; // @synthesize replayVideoButton=_replayVideoButton;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)replayButtonTapped;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 displayMode:(unsigned long long)arg2;

@end

