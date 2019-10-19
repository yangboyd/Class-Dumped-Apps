//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class CAShapeLayer, NSLayoutConstraint, NSString, SPTFreeTierTooltipStyle;

@interface SPTFreeTierTooltipView : UIView <GLUEStyleable>
{
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    SPTFreeTierTooltipStyle *_style;
    UIView *_containerView;
    UIView *_contentView;
    CAShapeLayer *_arrowLayer;
    CAShapeLayer *_viewBoxLayer;
    struct CGPoint _arrowPosition;
}

@property(nonatomic) struct CGPoint arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(retain, nonatomic) CAShapeLayer *viewBoxLayer; // @synthesize viewBoxLayer=_viewBoxLayer;
@property(retain, nonatomic) CAShapeLayer *arrowLayer; // @synthesize arrowLayer=_arrowLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SPTFreeTierTooltipStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) NSLayoutConstraint *trailingConstraint; // @synthesize trailingConstraint=_trailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
- (void).cxx_destruct;
- (void)animateLayerScale:(id)arg1 baseTransform:(struct CATransform3D)arg2 fromValue:(double)arg3 toValue:(double)arg4 delay:(double)arg5;
- (void)animateLayerTransform:(id)arg1 from:(struct CATransform3D)arg2 to:(struct CATransform3D)arg3 delay:(double)arg4;
- (void)animateLayer:(id)arg1 withKeyPath:(id)arg2 from:(double)arg3 to:(double)arg4 delay:(double)arg5;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (void)startShowAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)showWithArrowDirection:(unsigned long long)arg1 arrowXCenter:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)glue_applyStyle:(id)arg1;
- (void)updateConstraintsValues;
- (void)addLayoutConstraints;
- (void)applyStyle;
- (id)initWithStyle:(id)arg1 contentView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

