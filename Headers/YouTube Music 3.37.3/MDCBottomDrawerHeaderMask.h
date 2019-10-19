//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface MDCBottomDrawerHeaderMask : NSObject
{
    UIView *_view;
    double _maximumCornerRadius;
    double _minimumCornerRadius;
}

@property(nonatomic) double minimumCornerRadius; // @synthesize minimumCornerRadius=_minimumCornerRadius;
@property(nonatomic) double maximumCornerRadius; // @synthesize maximumCornerRadius=_maximumCornerRadius;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)animateWithPercentage:(double)arg1;
- (void)applyMask;
- (id)createPathWithCornerRadius:(double)arg1 width:(double)arg2 height:(double)arg3;
- (double)calcuateCornerRadiusFromMaximumCornerRadius:(double)arg1 toMinimumCornerRadius:(double)arg2 withPercentage:(double)arg3;
- (id)layerForCornerRadius:(double)arg1 inView:(id)arg2;
- (id)initWithMaximumCornerRadius:(double)arg1 minimumCornerRadius:(double)arg2;

@end

