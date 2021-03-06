//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveShareResponseService-Protocol.h"

@class NSString;
@protocol HTSLiveMessageDispatchProvider, IESLiveHTTPClient, IESLiveTracker;

@interface IESLiveShareReponseServiceImp : NSObject <IESLiveShareResponseService>
{
    id <IESLiveHTTPClient> _client;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <IESLiveTracker> _tracker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) id <IESLiveHTTPClient> client; // @synthesize client=_client;
- (void)reportShareInfoWithRoomModel:(id)arg1 shareType:(long long)arg2 platform:(id)arg3 currentUser:(id)arg4 eventContext:(id)arg5 extraTrackParams:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

