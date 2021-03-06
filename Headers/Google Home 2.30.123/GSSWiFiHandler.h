//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSConnectionDelegate-Protocol.h"

@class GSSBootstrapOptions, GSSConnection, NSArray, NSString;
@protocol GSSWiFiHandlerDelegate;

@interface GSSWiFiHandler : NSObject <GSSConnectionDelegate>
{
    GSSBootstrapOptions *_bootstrapOptions;
    GSSConnection *_connection;
    id <GSSWiFiHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GSSWiFiHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailAuthentication;
- (void)didFailWithError:(id)arg1;
- (void)didCompleteSetup;
- (void)didFinishWithAccountsHandler:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sendWiFiSSID:(id)arg1 password:(id)arg2 wiFiSecurity:(id)arg3;
@property(readonly, nonatomic) NSArray *visibleWiFiSSIDs;
- (id)initWithConnection:(id)arg1 bootstrapOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

