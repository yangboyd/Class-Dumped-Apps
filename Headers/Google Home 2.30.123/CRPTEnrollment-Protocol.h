//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CRPTEnrollKeysRequest, CRPTGetMetadataRequest, CRPTSyncKeysRequest, GRPCProtoCall;

@protocol CRPTEnrollment <NSObject>
- (GRPCProtoCall *)RPCToGetMetadataWithRequest:(CRPTGetMetadataRequest *)arg1 handler:(void (^)(CRPTGetMetadataResponse *, NSError *))arg2;
- (void)getMetadataWithRequest:(CRPTGetMetadataRequest *)arg1 handler:(void (^)(CRPTGetMetadataResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToEnrollKeysWithRequest:(CRPTEnrollKeysRequest *)arg1 handler:(void (^)(CRPTEnrollKeysResponse *, NSError *))arg2;
- (void)enrollKeysWithRequest:(CRPTEnrollKeysRequest *)arg1 handler:(void (^)(CRPTEnrollKeysResponse *, NSError *))arg2;
- (GRPCProtoCall *)RPCToSyncKeysWithRequest:(CRPTSyncKeysRequest *)arg1 handler:(void (^)(CRPTSyncKeysResponse *, NSError *))arg2;
- (void)syncKeysWithRequest:(CRPTSyncKeysRequest *)arg1 handler:(void (^)(CRPTSyncKeysResponse *, NSError *))arg2;
@end

