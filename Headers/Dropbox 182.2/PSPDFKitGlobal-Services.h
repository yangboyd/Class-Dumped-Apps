//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFKitGlobal.h>

@class PSPDFAnalytics, PSPDFBrightnessManager, PSPDFScreenController, PSPDFSpeechController, PSPDFStylusManager;
@protocol PSPDFApplication;

@interface PSPDFKitGlobal (Services)
- (id)uiExtension;
@property(retain, nonatomic) id <PSPDFApplication> application;
@property(readonly, nonatomic) PSPDFBrightnessManager *brightnessManager;
@property(readonly, nonatomic) PSPDFScreenController *screenController;
@property(readonly, nonatomic) PSPDFStylusManager *stylusManager;
@property(readonly, nonatomic) PSPDFSpeechController *speechController;
- (void)waitForUIThreadOperationsToFinish;
- (void)cancelUIThreadOperationsAndWait:(_Bool)arg1;
- (id)feedbackGenerator;
- (void)updateApplicationForExtensionContext:(id)arg1;
- (_Bool)isSpeechControllerLoaded;
@property(readonly, nonatomic) PSPDFAnalytics *analytics;
@end

