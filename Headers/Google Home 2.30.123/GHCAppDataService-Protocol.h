//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FCDRPCService-Protocol.h"

@class FCDRPC;

@protocol GHCAppDataService <FCDRPCService>
@property(readonly, nonatomic) FCDRPC *getFSIMetadataRPC;
@property(readonly, nonatomic) FCDRPC *getAppConfigurationDataRPC;
@property(readonly, nonatomic) FCDRPC *getDeviceProfilesRPC;
@property(readonly, nonatomic) FCDRPC *getAssistantLearnRPC;
@property(readonly, nonatomic) FCDRPC *getSummaryListRPC;
@end

