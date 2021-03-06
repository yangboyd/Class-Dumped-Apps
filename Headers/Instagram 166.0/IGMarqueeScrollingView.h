//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class CAReplicatorLayer, UIView;

@interface IGMarqueeScrollingView : IGPassthroughView
{
    UIView *_containerView;
    UIView *_contentView;
    double _scrollDistance;
    CAReplicatorLayer *_replicatorLayer;
    _Bool _animating;
    double _leftPadding;
    double _rightPadding;
    double _scrollProgress;
}

- (void).cxx_destruct;
@property(nonatomic) double scrollProgress; // @synthesize scrollProgress=_scrollProgress;
@property(nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property(nonatomic) double leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

