//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GNACheckActiveSupportSessionRequest, GNARevokeAllSupportSessionsRequest, GRPCCallOptions, GRPCUnaryProtoCall;
@protocol GRPCProtoResponseHandler;

@protocol GNAFrontendSupportService2 <NSObject>
- (GRPCUnaryProtoCall *)revokeAllSupportSessionsWithMessage:(GNARevokeAllSupportSessionsRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)checkActiveSupportSessionWithMessage:(GNACheckActiveSupportSessionRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

