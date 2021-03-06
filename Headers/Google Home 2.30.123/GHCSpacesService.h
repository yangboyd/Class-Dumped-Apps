//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GRPCProtoService.h"

#import "GHCSpacesService-Protocol.h"
#import "GHCSpacesService2-Protocol.h"

@class NSString;

@interface GHCSpacesService : GRPCProtoService <GHCSpacesService2, GHCSpacesService>
{
}

+ (id)serviceWithHost:(id)arg1 callOptions:(id)arg2;
+ (id)serviceWithHost:(id)arg1;
- (id)listSpaceTypesWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToListSpaceTypesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)listSpaceTypesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)batchModifySpacesDevicesWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToBatchModifySpacesDevicesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)batchModifySpacesDevicesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)createSpaceAndMoveDevicesWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToCreateSpaceAndMoveDevicesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createSpaceAndMoveDevicesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)listSpacesWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToListSpacesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)listSpacesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)deleteSpaceWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToDeleteSpaceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)deleteSpaceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)updateSpaceWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToUpdateSpaceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateSpaceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)getSpaceWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToGetSpaceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getSpaceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)createSpaceWithMessage:(id)arg1 responseHandler:(id)arg2 callOptions:(id)arg3;
- (id)RPCToCreateSpaceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)createSpaceWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
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

