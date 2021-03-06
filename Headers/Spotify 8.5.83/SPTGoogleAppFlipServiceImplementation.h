//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGoogleAppFlipService-Protocol.h"

@class NSString, SPTAllocationContext, SPTAuthLegacySession, SPTGoogleAppFlipURISubtypeManager;
@protocol SPTAuthService, SPTNetworkConnectivityController, SPTURIDispatchService;

@interface SPTGoogleAppFlipServiceImplementation : NSObject <SPTGoogleAppFlipService>
{
    id <SPTAuthService> _authService;
    id <SPTURIDispatchService> _uriDispatchService;
    SPTAuthLegacySession *_session;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    SPTGoogleAppFlipURISubtypeManager *_uriSubtypeManager;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTGoogleAppFlipURISubtypeManager *uriSubtypeManager; // @synthesize uriSubtypeManager=_uriSubtypeManager;
@property(readonly, nonatomic) __weak id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) __weak SPTAuthLegacySession *session; // @synthesize session=_session;
@property(readonly, nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(readonly, nonatomic) __weak id <SPTAuthService> authService; // @synthesize authService=_authService;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

