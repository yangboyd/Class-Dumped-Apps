//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCBorderOverlayCornerView;

@interface SCBorderOverlayView : UIView
{
    UIView *_topBorderView;
    UIView *_leftBorderView;
    UIView *_bottomBorderView;
    UIView *_rightBorderView;
    SCBorderOverlayCornerView *_topLeftCornerView;
    SCBorderOverlayCornerView *_topRightCornerView;
    SCBorderOverlayCornerView *_bottomLeftCornerView;
    SCBorderOverlayCornerView *_bottomRightCornerView;
    double _topBorderWidth;
    double _leftBorderWidth;
    double _bottomBorderWidth;
    double _rightBorderWidth;
    double _topLeftCornerRadius;
    double _topRightCornerRadius;
    double _bottomLeftCornerRadius;
    double _bottomRightCornerRadius;
}

@property(nonatomic) double bottomRightCornerRadius; // @synthesize bottomRightCornerRadius=_bottomRightCornerRadius;
@property(nonatomic) double bottomLeftCornerRadius; // @synthesize bottomLeftCornerRadius=_bottomLeftCornerRadius;
@property(nonatomic) double topRightCornerRadius; // @synthesize topRightCornerRadius=_topRightCornerRadius;
@property(nonatomic) double topLeftCornerRadius; // @synthesize topLeftCornerRadius=_topLeftCornerRadius;
@property(nonatomic) double rightBorderWidth; // @synthesize rightBorderWidth=_rightBorderWidth;
@property(nonatomic) double bottomBorderWidth; // @synthesize bottomBorderWidth=_bottomBorderWidth;
@property(nonatomic) double leftBorderWidth; // @synthesize leftBorderWidth=_leftBorderWidth;
@property(nonatomic) double topBorderWidth; // @synthesize topBorderWidth=_topBorderWidth;
- (void).cxx_destruct;
- (void)setAllCornerRadii:(double)arg1;
@property(nonatomic) struct CGRect contentBounds;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

