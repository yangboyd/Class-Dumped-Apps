//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>

@class AVCaptureSession, AVCaptureVideoPreviewLayer, NSString, UIView;

@interface GVRQRScanViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>
{
    AVCaptureSession *_captureSession;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    CDUnknownBlockType _completion;
    UIView *_preview;
    UIView *_tickmarkView;
    UIView *_guidanceView;
    UIView *_guidanceInsetView;
    _Bool _processing;
    _Bool _shouldShowConfirmationView;
    _Bool _showingHUDMessage;
}

+ (void)logQrCodeScanWithUrl:(id)arg1 withStatus:(int)arg2;
+ (void)showConfirmationDialogWithCompletion:(CDUnknownBlockType)arg1;
+ (void)showConfirmationDialog;
- (void).cxx_destruct;
- (void)updateGuidanceInsetViewFrame;
- (void)showShortMessage:(id)arg1;
- (void)processQrCode:(id)arg1;
- (void)freezePreview;
- (void)finishCapture;
- (void)didTapNextButton:(id)arg1;
- (void)skipAndClose;
- (long long)videoOrientation;
- (void)showConfirmationView;
- (long long)viewOrientation;
- (void)didChangeStatusBarOrientation:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 showConfirmationView:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

