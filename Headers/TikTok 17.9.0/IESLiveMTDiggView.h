//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString;

@interface IESLiveMTDiggView : UIImageView <CAAnimationDelegate>
{
    UIImageView *_iconImageView;
    UIImageView *_avatorImageView;
    CAShapeLayer *_borderLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(retain, nonatomic) UIImageView *avatorImageView; // @synthesize avatorImageView=_avatorImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)playAvatorIconChangeAnimaWithNewStrategy;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)playAvatorIconChangeAnima;
- (id)initWithFrame:(struct CGRect)arg1 ownDigg:(_Bool)arg2 iconImage:(id)arg3 avatorImage:(id)arg4 newDiggStrategy:(_Bool)arg5 showSwitch:(_Bool)arg6;
- (id)initWithFrame:(struct CGRect)arg1 ownDigg:(_Bool)arg2 iconImage:(id)arg3 avatorImage:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

