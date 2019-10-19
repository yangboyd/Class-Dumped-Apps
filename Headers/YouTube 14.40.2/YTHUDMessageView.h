//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOHUDMessageViewDefault.h"

@class FLXLayout, UILabel, UIView, YTLabel;

@interface YTHUDMessageView : GOOHUDMessageViewDefault
{
    FLXLayout *_layout;
    UIView *_wrapperView;
    UIView *_backgroundView;
    UIView *_customIcon;
    YTLabel *_customLabel;
}

@property(retain, nonatomic) YTLabel *customLabel; // @synthesize customLabel=_customLabel;
@property(retain, nonatomic) UIView *customIcon; // @synthesize customIcon=_customIcon;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *wrapperView; // @synthesize wrapperView=_wrapperView;
- (void).cxx_destruct;
- (double)bottomSafeInset;
- (id)root;
- (_Bool)requiresCustomLayout;
- (id)action;
@property(readonly, nonatomic) UIView *customActionView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)maximumHeight;
- (struct CGSize)intrinsicContentSize;
- (_Bool)anchoredToScreenEdge;
- (void)layoutSubviews;
- (id)initWithMessage:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;
- (double)minimumWidth;

// Remaining properties
@property(retain, nonatomic) UIView *buttonView; // @dynamic buttonView;
@property(retain, nonatomic) UIView *containerView; // @dynamic containerView;
@property(retain, nonatomic) UIView *contentView; // @dynamic contentView;
@property(retain, nonatomic) UILabel *label; // @dynamic label;

@end

