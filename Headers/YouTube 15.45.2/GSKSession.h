//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GSKSessionDelegate-Protocol.h>
#import <Module_Framework/GSKSessionLogger-Protocol.h>
#import <Module_Framework/GSKSessionProtocol-Protocol.h>

@class GSKSessionConfig, NSString;
@protocol GSKSessionDelegate, GSKSessionInternalProtocol, GSKSessionLogger;

@interface GSKSession : NSObject <GSKSessionDelegate, GSKSessionLogger, GSKSessionProtocol>
{
    id <GSKSessionInternalProtocol> _underlyingSession;
    id <GSKSessionLogger> _sessionLogger;
    id <GSKSessionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GSKSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleResponse:(id)arg1;
- (void)session:(id)arg1 didCloseWithTransportType:(long long)arg2;
- (void)session:(id)arg1 didFailWithError:(id)arg2 transportType:(long long)arg3;
- (void)session:(id)arg1 didOpenWithTransportType:(long long)arg2;
- (void)sessionDidFinish:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didReceiveResponse:(id)arg2;
- (id)sendRequest:(id)arg1;
- (void)disconnect;
- (void)stopSession;
- (void)startSession;
@property(readonly, nonatomic) GSKSessionConfig *config;
@property(readonly, nonatomic) _Bool isStarted;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

