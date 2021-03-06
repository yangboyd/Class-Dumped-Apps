//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class GOALSChronofencingService, GOALSDebugLogger, GOALSRegionMonitoringClient, NSString, UIColor, UILabel, UITextField;
@protocol GOALSRegionMonitoringClientProvider;

@interface GOALSDebugTrackingSessionViewController : UIViewController <UITextFieldDelegate>
{
    GOALSChronofencingService *_goalsChronofencingService;
    GOALSDebugLogger *_debugLogger;
    id <GOALSRegionMonitoringClientProvider> _goalsRegionMonitoringClientProvider;
    GOALSRegionMonitoringClient *_goalsRegionMonitoringClient;
    UILabel *_callbackStatus;
    UIColor *_successColor;
    UIColor *_failureColor;
    UITextField *_targetedRMIdTextField;
    UITextField *_clientIdTextField;
    UITextField *_featureIdTextField;
    UITextField *_trackingSessionIdTextField;
}

@property(retain, nonatomic) UITextField *trackingSessionIdTextField; // @synthesize trackingSessionIdTextField=_trackingSessionIdTextField;
@property(retain, nonatomic) UITextField *featureIdTextField; // @synthesize featureIdTextField=_featureIdTextField;
@property(retain, nonatomic) UITextField *clientIdTextField; // @synthesize clientIdTextField=_clientIdTextField;
@property(retain, nonatomic) UITextField *targetedRMIdTextField; // @synthesize targetedRMIdTextField=_targetedRMIdTextField;
@property(retain, nonatomic) UIColor *failureColor; // @synthesize failureColor=_failureColor;
@property(retain, nonatomic) UIColor *successColor; // @synthesize successColor=_successColor;
@property(retain, nonatomic) UILabel *callbackStatus; // @synthesize callbackStatus=_callbackStatus;
@property(retain, nonatomic) GOALSRegionMonitoringClient *goalsRegionMonitoringClient; // @synthesize goalsRegionMonitoringClient=_goalsRegionMonitoringClient;
@property(retain, nonatomic) id <GOALSRegionMonitoringClientProvider> goalsRegionMonitoringClientProvider; // @synthesize goalsRegionMonitoringClientProvider=_goalsRegionMonitoringClientProvider;
@property(retain, nonatomic) GOALSDebugLogger *debugLogger; // @synthesize debugLogger=_debugLogger;
@property(retain, nonatomic) GOALSChronofencingService *goalsChronofencingService; // @synthesize goalsChronofencingService=_goalsChronofencingService;
- (void).cxx_destruct;
- (id)getApplicationInstallId;
- (CDUnknownBlockType)createErrorLoggerForMethod:(id)arg1;
- (CDUnknownBlockType)createSuccessLoggerForMethodGetSessions;
- (CDUnknownBlockType)createSuccessLoggerForMethodCancelTracking:(id)arg1;
- (CDUnknownBlockType)createSuccessLoggerForMethodStartTracking:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)instantiateRegionMonitoringClient;
- (void)getSessionsStatus;
- (void)cancel;
- (void)create;
- (id)createTextViewWithTitle:(id)arg1;
- (id)createButtonWithTitle:(id)arg1 action:(SEL)arg2 backgroundColor:(id)arg3;
- (id)rgbColorWithRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

