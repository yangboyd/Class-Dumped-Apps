//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIPlayerControlsViewRefresh.h"

#import "NSObject-Protocol.h"

@protocol _TtP4Argo39NFUISystemBrightnessViewRefreshDelegate_;

@interface _TtC4Argo31NFUISystemBrightnessViewRefresh : NFUIPlayerControlsViewRefresh <NSObject>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: value
    // Error parsing type: , name: brightnessImage
    // Error parsing type: , name: brightnessSlider
    // Error parsing type: , name: brightnessSliderProgressView
    // Error parsing type: , name: containerView
    // Error parsing type: , name: containerWidthContraint
    // Error parsing type: , name: containerLeadingConstraint
    // Error parsing type: , name: valueHeightConstraint
    // Error parsing type: , name: lastPosition
    // Error parsing type: , name: viewWidth
}

- (void).cxx_destruct;
- (void)showControlsWithAnimation:(_Bool)arg1;
- (void)hideControlsWithAnimation:(_Bool)arg1;
- (void)handlePanWithGesture:(id)arg1;
- (void)layoutSubviews;
- (void)brightnessDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <_TtP4Argo39NFUISystemBrightnessViewRefreshDelegate_> delegate; // @synthesize delegate;

@end

