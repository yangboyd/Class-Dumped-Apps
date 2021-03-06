//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCAORCreateDeviceUserLinksRequest, GCAORDeleteDeviceGroupRequest, GCAORDeleteDeviceUserLinkRequest, GCAORGetAssistantLanguageRequest, GCAORGetDeviceLocationRequest, GCAORGetLinkedCastDevicesRequest, GCAORGetLinkedUsersRequest, GCAORReportAccountLinkingCompleteRequest, GCAORSetAssistantLanguageRequest, GCAORSetDeviceLocationRequest, GRPCCallOptions, GRPCUnaryProtoCall;
@protocol GRPCProtoResponseHandler;

@protocol GCAOROrchestrationService2 <NSObject>
- (GRPCUnaryProtoCall *)reportAccountLinkingCompleteWithMessage:(GCAORReportAccountLinkingCompleteRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)unlinkDeviceWithMessage:(GCAORDeleteDeviceUserLinkRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)unlinkGroupWithMessage:(GCAORDeleteDeviceGroupRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)setAssistantLanguageWithMessage:(GCAORSetAssistantLanguageRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getAssistantLanguageWithMessage:(GCAORGetAssistantLanguageRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)setDeviceLocationWithMessage:(GCAORSetDeviceLocationRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getDeviceLocationWithMessage:(GCAORGetDeviceLocationRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getLinkedDevicesWithMessage:(GCAORGetLinkedCastDevicesRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)getLinkedUsersWithMessage:(GCAORGetLinkedUsersRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)createDeviceUserLinksWithMessage:(GCAORCreateDeviceUserLinksRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

