//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESIMLongConnectionClientUnderlayingWebSocketProtocol-Protocol.h"

@class NSString;
@protocol IESIMSuspendWSConnectionCheckerProtocol, IESIMWSConnectionManagerProtocol;

@interface IESIMLongConnectionClientUnderlayingWebSocketImpl : NSObject <IESIMLongConnectionClientUnderlayingWebSocketProtocol>
{
    CDUnknownBlockType _notifyNewMessageCallback;
    id <IESIMWSConnectionManagerProtocol> _wsConnectManager;
    id <IESIMSuspendWSConnectionCheckerProtocol> _wsSuspendChecker;
}

@property(retain, nonatomic) id <IESIMSuspendWSConnectionCheckerProtocol> wsSuspendChecker; // @synthesize wsSuspendChecker=_wsSuspendChecker;
@property(retain, nonatomic) id <IESIMWSConnectionManagerProtocol> wsConnectManager; // @synthesize wsConnectManager=_wsConnectManager;
- (void)setNotifyNewMessageCallback:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)notifyNewMessageCallback;
- (void).cxx_destruct;
- (void)webSocketRequestDidFinishWithError:(id)arg1;
- (_Bool)webSocketBreak;
- (id)generateNextMessage;
- (_Bool)sendMessage:(id)arg1;
- (void)handleIMPushMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

