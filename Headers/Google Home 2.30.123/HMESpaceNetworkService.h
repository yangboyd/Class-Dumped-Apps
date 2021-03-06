//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMESpaceNetworkService-Protocol.h"

@class NSString;
@protocol GHCSpacesService;

@interface HMESpaceNetworkService : NSObject <HMESpaceNetworkService>
{
    id <GHCSpacesService> _service;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GHCSpacesService> service; // @synthesize service=_service;
- (id)modifySpacesRequestForInstructions:(id)arg1 inStructure:(id)arg2;
- (id)modifySpaceInstructionToAssignDevice:(id)arg1 toSpace:(id)arg2;
- (id)deleteSpaceRequestForSpaceID:(id)arg1 inStructure:(id)arg2;
- (id)updateSpaceRequestForDisplayName:(id)arg1 spaceID:(id)arg2 inStructure:(id)arg3;
- (id)createSpaceRequestForDisplayName:(id)arg1 type:(id)arg2 inStructure:(id)arg3 moveDevice:(id)arg4;
- (void)moveDevicesPerSpace:(id)arg1 inStructure:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveDevice:(id)arg1 toSpace:(id)arg2 inStructure:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteSpace:(id)arg1 inStructure:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDisplayName:(id)arg1 forSpace:(id)arg2 inStructure:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createSpaceWithDisplayName:(id)arg1 type:(id)arg2 inStructure:(id)arg3 moveDevice:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

