//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, UIColor;

@interface SCHairlineView : UIView
{
    unsigned long long _rectEdge;
    UIColor *_hairlineColor;
    CALayer *_hairlineSublayer;
}

+ (id)hairlineViewInstalledInView:(id)arg1 rectEdge:(unsigned long long)arg2 edgeInsets:(struct UIEdgeInsets)arg3;
+ (unsigned long long)defaultRectEdgeForFrame:(struct CGRect)arg1;
+ (double)hairlineThickness;
+ (id)defaultHairlineColor;
@property(retain, nonatomic) CALayer *hairlineSublayer; // @synthesize hairlineSublayer=_hairlineSublayer;
@property(retain, nonatomic) UIColor *hairlineColor; // @synthesize hairlineColor=_hairlineColor;
@property(nonatomic) unsigned long long rectEdge; // @synthesize rectEdge=_rectEdge;
- (void).cxx_destruct;
- (struct CGRect)_frameOfHairlineWithThickness:(double)arg1 inBounds:(struct CGRect)arg2;
- (void)_updateHairlineSublayerColor;
- (void)_configureHairlineSublayer;
- (void)_setRectEdgeVertical:(_Bool)arg1 edgeBias:(double)arg2;
- (void)setAutoresizingMaskForCurrentRectEdge;
@property(nonatomic) double edgeBias; // @dynamic edgeBias;
@property(nonatomic, getter=isVertical) _Bool vertical; // @dynamic vertical;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 rectEdge:(unsigned long long)arg2;

@end

