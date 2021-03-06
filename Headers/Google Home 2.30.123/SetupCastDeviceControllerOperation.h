//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "GCKCastDeviceControllerDelegate-Protocol.h"
#import "SetupCastChannelListener-Protocol.h"

@class GCKCastDeviceController, GCKDevice, NSDictionary, NSError, NSMutableDictionary, NSString, SetupCastChannel;

@interface SetupCastDeviceControllerOperation : NSOperation <GCKCastDeviceControllerDelegate, SetupCastChannelListener>
{
    _Bool _executing;
    _Bool _finished;
    GCKDevice *_device;
    NSString *_typeInRequest;
    NSDictionary *_jsonPayload;
    CDUnknownBlockType _completion;
    NSError *_error;
    GCKCastDeviceController *_deviceController;
    SetupCastChannel *_castChannel;
    NSMutableDictionary *_jsonDataInResponse;
    long long _expectedRequestId;
}

- (void).cxx_destruct;
@property(nonatomic) long long expectedRequestId; // @synthesize expectedRequestId=_expectedRequestId;
@property(retain, nonatomic) NSMutableDictionary *jsonDataInResponse; // @synthesize jsonDataInResponse=_jsonDataInResponse;
@property(retain, nonatomic) SetupCastChannel *castChannel; // @synthesize castChannel=_castChannel;
@property(retain, nonatomic) GCKCastDeviceController *deviceController; // @synthesize deviceController=_deviceController;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSDictionary *jsonPayload; // @synthesize jsonPayload=_jsonPayload;
@property(readonly, nonatomic) NSString *typeInRequest; // @synthesize typeInRequest=_typeInRequest;
@property(readonly, nonatomic) GCKDevice *device; // @synthesize device=_device;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void)requireDeviceControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)setupCastChannel:(id)arg1 didReceiveJsonData:(id)arg2 responseCode:(long long)arg3 responseType:(id)arg4 requestId:(long long)arg5;
- (void)setupCastChannelDidConnect:(id)arg1;
- (void)deviceController:(id)arg1 didDisconnectFromApplicationWithError:(id)arg2;
- (void)deviceController:(id)arg1 didFailToConnectToApplicationWithError:(id)arg2;
- (void)deviceController:(id)arg1 didConnectToApplication:(id)arg2 sessionID:(id)arg3 launchedApplication:(_Bool)arg4;
- (void)deviceController:(id)arg1 didDisconnectWithError:(id)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceController:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)deviceControllerDidConnect:(id)arg1;
- (void)connectToSetupChannelWithDeviceController:(id)arg1;
- (id)generalErrorWithCode:(long long)arg1;
- (id)generalError;
- (void)cancel;
- (void)end;
- (void)begin;
- (void)startTimeout;
- (void)start;
- (id)initWithDevice:(id)arg1 typeInRequest:(id)arg2 jsonPayload:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

