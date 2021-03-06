//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GRPCProtoCall, TSKCheckOngoingImportStateRequest, TSKGetActiveRemindersCountRequest, TSKStartRemindersImportRequest;

@protocol TSKTasksRemindersImportService <NSObject>
- (GRPCProtoCall *)RPCToCheckOngoingImportStateWithRequest:(TSKCheckOngoingImportStateRequest *)arg1 handler:(void (^)(TSKCheckOngoingImportStateResponse *, NSError *))arg2;
- (void)checkOngoingImportStateWithRequest:(TSKCheckOngoingImportStateRequest *)arg1 handler:(void (^)(TSKCheckOngoingImportStateResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToStartRemindersImportWithRequest:(TSKStartRemindersImportRequest *)arg1 handler:(void (^)(TSKStartRemindersImportResponse *, NSError *))arg2;
- (void)startRemindersImportWithRequest:(TSKStartRemindersImportRequest *)arg1 handler:(void (^)(TSKStartRemindersImportResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToGetActiveRemindersCountWithRequest:(TSKGetActiveRemindersCountRequest *)arg1 handler:(void (^)(TSKGetActiveRemindersCountResponse *, NSError *))arg2;
- (void)getActiveRemindersCountWithRequest:(TSKGetActiveRemindersCountRequest *)arg1 handler:(void (^)(TSKGetActiveRemindersCountResponse *, NSError *))arg2;
@end

