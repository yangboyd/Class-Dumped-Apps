//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GRPCProtoService.h"

#import "ARIAuditRecordingMobileService-Protocol.h"
#import "ARIAuditRecordingMobileService2-Protocol.h"

@class NSString;

@interface ARIAuditRecordingMobileService : GRPCProtoService <ARIAuditRecordingMobileService2, ARIAuditRecordingMobileService>
{
}

+ (id)serviceWithHost:(id)arg1 callOptions:(id)arg2;
+ (id)serviceWithHost:(id)arg1;
- (id)createAuditRecordWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToCreateAuditRecordWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createAuditRecordWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithHost:(id)arg1 packageName:(id)arg2 serviceName:(id)arg3 callOptions:(id)arg4;
- (id)initWithHost:(id)arg1 packageName:(id)arg2 serviceName:(id)arg3;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 callOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

