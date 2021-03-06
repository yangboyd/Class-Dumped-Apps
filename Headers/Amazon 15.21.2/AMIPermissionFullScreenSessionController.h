//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIPermissionRequestDelegate-Protocol.h"
#import "AMIPermissionSessionController-Protocol.h"

@class AMILocationMetricsTeamServiceProvider, AMILocationPermissionRequest, NSString;
@protocol AMIAppNavigationService;

@interface AMIPermissionFullScreenSessionController : NSObject <AMIPermissionRequestDelegate, AMIPermissionSessionController>
{
    AMILocationPermissionRequest *_request;
    id <AMIAppNavigationService> _navigationService;
    CDUnknownBlockType _completionCallback;
    AMILocationMetricsTeamServiceProvider *_locationMetricsTeamServiceProvider;
}

@property(retain, nonatomic) AMILocationMetricsTeamServiceProvider *locationMetricsTeamServiceProvider; // @synthesize locationMetricsTeamServiceProvider=_locationMetricsTeamServiceProvider;
@property(copy, nonatomic) CDUnknownBlockType completionCallback; // @synthesize completionCallback=_completionCallback;
@property(retain, nonatomic) id <AMIAppNavigationService> navigationService; // @synthesize navigationService=_navigationService;
@property(retain, nonatomic) AMILocationPermissionRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)permissionRequestDidFail:(id)arg1;
- (void)permissionRequestDidSuccess:(id)arg1;
- (void)presentPermissionViewController;
- (void)requestPermissionAnimated;
- (void)authorizationStatusDidChange:(int)arg1;
- (void)abort:(_Bool)arg1;
- (void)finishWithStatus:(unsigned long long)arg1;
- (void)start;
- (id)initWithRequest:(id)arg1 navigationService:(id)arg2 locationMetricsTeamServiceProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

