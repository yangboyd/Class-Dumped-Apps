//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDSFCheckAclChangeRequest, GDSFGetSharingDialogDataRequest, GRPCCallOptions, GRPCUnaryProtoCall;
@protocol GRPCProtoResponseHandler;

@protocol GDSFDriveShareFrontendService2 <NSObject>
- (GRPCUnaryProtoCall *)getSharingDialogDataWithMessage:(GDSFGetSharingDialogDataRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
- (GRPCUnaryProtoCall *)checkAclChangeForPermissionReductionWithMessage:(GDSFCheckAclChangeRequest *)arg1 responseHandler:(id <GRPCProtoResponseHandler>)arg2 callOptions:(GRPCCallOptions *)arg3;
@end

