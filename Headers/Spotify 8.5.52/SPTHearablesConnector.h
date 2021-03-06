//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EAAccessoryDelegate-Protocol.h"

@class NSMutableSet, NSString;
@protocol SPTHearablesConnectionDelegate;

@interface SPTHearablesConnector : NSObject <EAAccessoryDelegate>
{
    _Bool _acceptingConnections;
    id <SPTHearablesConnectionDelegate> _delegate;
    NSMutableSet *_connectedAccessories;
}

+ (id)createConnectionForAccessory:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *connectedAccessories; // @synthesize connectedAccessories=_connectedAccessories;
@property(readonly, nonatomic, getter=isAcceptingConnections) _Bool acceptingConnections; // @synthesize acceptingConnections=_acceptingConnections;
@property(nonatomic) __weak id <SPTHearablesConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isHearablesAccessory:(id)arg1;
- (void)connectToAccessory:(id)arg1;
- (void)tryToConnectToAccessory:(id)arg1;
- (void)accessoryDisconnected:(id)arg1;
- (void)accessoryConnected:(id)arg1;
- (void)disconnectAllConnectedAccessories;
- (void)establishConnectionsToConnectedAccessories;
- (void)stopAcceptingConnections;
- (void)startAcceptingConnections;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

