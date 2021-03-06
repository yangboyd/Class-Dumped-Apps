//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGCaptureWindow.h>

#import <Instabug/IBGButtonTappedDelegate-Protocol.h>

@class IBGVideoRecordingViewController, NSString, UIActivityIndicatorView, UIButton, UIView;

@interface IBGVideoRecorderWindow : IBGCaptureWindow <IBGButtonTappedDelegate>
{
    UIActivityIndicatorView *_activityIndicatorView;
    UIView *_dimmedView;
    UIButton *_audioRecordingButton;
    UIButton *_stopVideoRecordingButton;
    IBGVideoRecordingViewController *_videoRecordingViewController;
}

@property(retain, nonatomic) IBGVideoRecordingViewController *videoRecordingViewController; // @synthesize videoRecordingViewController=_videoRecordingViewController;
@property(retain, nonatomic) UIButton *stopVideoRecordingButton; // @synthesize stopVideoRecordingButton=_stopVideoRecordingButton;
@property(retain, nonatomic) UIButton *audioRecordingButton; // @synthesize audioRecordingButton=_audioRecordingButton;
@property(retain, nonatomic) UIView *dimmedView; // @synthesize dimmedView=_dimmedView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)touchPointTargetIsRecordButton:(struct CGPoint)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

