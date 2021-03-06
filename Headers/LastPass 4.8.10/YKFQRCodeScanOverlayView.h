//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YKFView.h"

@class UIButton, UILabel;
@protocol YKFQRCodeScanOverlayViewDelegate;

@interface YKFQRCodeScanOverlayView : YKFView
{
    id <YKFQRCodeScanOverlayViewDelegate> _delegate;
    UIButton *_dismissButton;
    UILabel *_scanHintLabel;
    UILabel *_cameraPermissionLabel;
}

@property(retain, nonatomic) UILabel *cameraPermissionLabel; // @synthesize cameraPermissionLabel=_cameraPermissionLabel;
@property(retain, nonatomic) UILabel *scanHintLabel; // @synthesize scanHintLabel=_scanHintLabel;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(nonatomic) __weak id <YKFQRCodeScanOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupCameraPermissionLabel;
- (void)setupScanHintLabel;
- (void)setupDismissButton;
- (void)setupControls;
- (void)setupLocalization;
- (void)dismissButtonDidPress:(id)arg1;
- (void)showCameraPermissionsNotGranted;
- (id)initWithFrame:(struct CGRect)arg1;

@end

