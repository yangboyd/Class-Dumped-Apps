//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface WARingView : UIView
{
    CAShapeLayer *_seenRing;
    CAShapeLayer *_unseenRing;
    double _lineWitdh;
    unsigned long long _numberOfSegments;
    unsigned long long _numberOfCompletedSegments;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long numberOfCompletedSegments; // @synthesize numberOfCompletedSegments=_numberOfCompletedSegments;
@property(nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property double lineWidth;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateColors;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

