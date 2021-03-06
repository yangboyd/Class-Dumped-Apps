//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CXIHighlightableTouchAreaButton;
@protocol AMIIPhoneAppManagerBridge, ANXMetricsService, ARTRightToLeftService;

@interface CXITopNavButtonController : UIViewController
{
    id <AMIIPhoneAppManagerBridge> _appManager;
    id <ANXMetricsService> _metrics;
    id <ARTRightToLeftService> _rightToLeftService;
    CXIHighlightableTouchAreaButton *_button;
    double _iconHeight;
}

@property(nonatomic) double iconHeight; // @synthesize iconHeight=_iconHeight;
@property(retain, nonatomic) CXIHighlightableTouchAreaButton *button; // @synthesize button=_button;
@property(retain, nonatomic) id <ARTRightToLeftService> rightToLeftService; // @synthesize rightToLeftService=_rightToLeftService;
@property(retain, nonatomic) id <ANXMetricsService> metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) id <AMIIPhoneAppManagerBridge> appManager; // @synthesize appManager=_appManager;
- (void).cxx_destruct;
- (_Bool)imageShouldBeRenderingAsTemplate;
- (id)iconAsset;
- (void)updateButtonAssets;
- (void)didTapOnButton:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init:(double)arg1;
- (id)init;

@end

