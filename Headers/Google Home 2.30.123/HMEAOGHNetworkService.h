//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEAOGHNetworkService-Protocol.h"

@class NSString;
@protocol GHCAoghService;

@interface HMEAOGHNetworkService : NSObject <HMEAOGHNetworkService>
{
    id <GHCAoghService> _ghcNetworkService;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GHCAoghService> ghcNetworkService; // @synthesize ghcNetworkService=_ghcNetworkService;
- (void)fetchAOGHHostDevicesForStructureID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

