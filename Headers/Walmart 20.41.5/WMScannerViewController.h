//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WMBarcodeScanner/WMScannerPrivateDelegate-Protocol.h>

@class CALayer, NSObject, NSString, UIColor, UILabel, UIView, WMScannerBandLayer;
@protocol WMScannerDelegate, WMScannerViewControllerProtocol, _TtP16WMBarcodeScanner25WMScannerCrosshairOverlay_;

@interface WMScannerViewController : UIViewController <WMScannerPrivateDelegate>
{
    NSObject<WMScannerViewControllerProtocol> *_underlyingScanner;
    UIViewController<WMScannerViewControllerProtocol> *_underlyingController;
    CALayer *_dimmerLayer;
    WMScannerBandLayer *_bandLayer;
    UIView<_TtP16WMBarcodeScanner25WMScannerCrosshairOverlay_> *_crosshairOverlay;
    _Bool _allowScannerRestartOnViewDidAppear;
    _Bool _enableCameraAlertShowSettingsButton;
    _Bool _hideVisuals;
    int _overlayType;
    int _scannerType;
    id <WMScannerDelegate> _delegate;
    UILabel *_instructionLabel;
    UILabel *_largeErrorLabel;
    UILabel *_smallErrorLabel;
    double _instructionLabelHeight;
    UIColor *_fixedQROverlayColor;
    NSString *_enableCameraAlertTitle;
    NSString *_enableCameraAlertMessage;
}

+ (void)getCameraPermission:(CDUnknownBlockType)arg1;
+ (_Bool)hasUsableCamera;
+ (_Bool)hasPhysicalCamera;
- (void).cxx_destruct;
@property(nonatomic) int scannerType; // @synthesize scannerType=_scannerType;
@property(nonatomic) _Bool hideVisuals; // @synthesize hideVisuals=_hideVisuals;
@property(nonatomic) int overlayType; // @synthesize overlayType=_overlayType;
@property(nonatomic) _Bool enableCameraAlertShowSettingsButton; // @synthesize enableCameraAlertShowSettingsButton=_enableCameraAlertShowSettingsButton;
@property(copy, nonatomic) NSString *enableCameraAlertMessage; // @synthesize enableCameraAlertMessage=_enableCameraAlertMessage;
@property(copy, nonatomic) NSString *enableCameraAlertTitle; // @synthesize enableCameraAlertTitle=_enableCameraAlertTitle;
@property(retain, nonatomic) UIColor *fixedQROverlayColor; // @synthesize fixedQROverlayColor=_fixedQROverlayColor;
@property(nonatomic) double instructionLabelHeight; // @synthesize instructionLabelHeight=_instructionLabelHeight;
@property(readonly, nonatomic) UILabel *smallErrorLabel; // @synthesize smallErrorLabel=_smallErrorLabel;
@property(readonly, nonatomic) UILabel *largeErrorLabel; // @synthesize largeErrorLabel=_largeErrorLabel;
@property(readonly, nonatomic) UILabel *instructionLabel; // @synthesize instructionLabel=_instructionLabel;
@property(nonatomic) __weak id <WMScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enableOverlay:(_Bool)arg1;
- (void)enableDimmerLayer:(_Bool)arg1;
- (void)scannerViewController:(id)arg1 asyncScanStatusDidUpdate:(unsigned long long)arg2;
- (void)scannerViewController:(id)arg1 didFindCodes:(id)arg2;
- (void)showErrorWithTimeInterval:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)turnTorchOn:(_Bool)arg1;
- (_Bool)hasTorch;
- (void)stopScanningWithAutoRestart:(_Bool)arg1;
- (void)stopScanningWithAutoRestart:(_Bool)arg1 hideOverlay:(_Bool)arg2;
- (void)stopScanning;
- (void)startScanning;
- (void)updateFocusRectangle;
- (void)updateLayout;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_initialize;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithScannerType:(int)arg1 watermarkAction:(int)arg2;
- (id)initWithScannerType:(int)arg1;
- (id)initWithScannerType:(int)arg1 hideVisuals:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

