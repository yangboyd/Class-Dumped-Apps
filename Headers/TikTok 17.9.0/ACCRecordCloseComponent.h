//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCFeatureComponent.h"

@class ACCAnimatedButton, ACCRecordCloseViewModel;
@protocol ACCCameraService, ACCRecorderViewContainer, IESServiceProvider;

@interface ACCRecordCloseComponent : ACCFeatureComponent
{
    id <IESServiceProvider> _serviceProvider;
    id <ACCRecorderViewContainer> _viewContainer;
    ACCRecordCloseViewModel *_viewModel;
    id <ACCCameraService> _cameraService;
    ACCAnimatedButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ACCAnimatedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) id <ACCCameraService> cameraService; // @synthesize cameraService=_cameraService;
@property(retain, nonatomic) ACCRecordCloseViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <ACCRecorderViewContainer> viewContainer; // @synthesize viewContainer=_viewContainer;
- (void)setServiceProvider:(id)arg1;
- (id)serviceProvider;
- (id)switchModeViewModel;
- (id)flowViewModel;
- (void)saveTheOriginalDraft;
- (void)transferToUrl:(id)arg1;
- (void)showShootGuideAlertWithLink:(id)arg1;
- (void)showEmptyRecordStitchAlert:(id)arg1;
- (void)showCancelStitchSheetAlertButton:(id)arg1;
- (void)showCancelShootAlertBtn:(id)arg1;
- (void)p_popWithIsEnterLive:(_Bool)arg1;
- (void)p_popWholeRecorderVCStack;
- (void)clearAllEditBackUps;
- (void)clickBackBtn:(id)arg1;
- (id)componentContentView;
- (unsigned long long)preferredLoadPhase;
- (void)componentDidMount;

@end

