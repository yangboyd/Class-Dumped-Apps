//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHMClearHandRaisesRequest, GHMCreateHandRaiseRequest, GHMDeleteHandRaiseRequest, GHMListHandRaisesRequest, GRPCCallOptions, GRPCUnaryProtoCall;
@protocol GRPCProtoResponseHandler;

@protocol GHMMeetingHandRaiseService2 <NSObject>
- (GRPCUnaryProtoCall *)clearHandRaisesWithMessage:(GHMClearHandRaisesRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)deleteHandRaiseWithMessage:(GHMDeleteHandRaiseRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)listHandRaisesWithMessage:(GHMListHandRaisesRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)createHandRaiseWithMessage:(GHMCreateHandRaiseRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

