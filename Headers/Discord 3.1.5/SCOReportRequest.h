//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class SCOGetTokensRequest, SCOManageMessagesRequest, SCOManageSubscriptionsRequest, SCORegisterDeviceRequest, SCORequestHeader, SCOUpdateSignalsRequest;

@interface SCOReportRequest : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCOGetTokensRequest *getTokensRequest; // @dynamic getTokensRequest;
@property(nonatomic) _Bool hasGetTokensRequest; // @dynamic hasGetTokensRequest;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasManageMessagesRequest; // @dynamic hasManageMessagesRequest;
@property(nonatomic) _Bool hasManageSubscriptionsRequest; // @dynamic hasManageSubscriptionsRequest;
@property(nonatomic) _Bool hasRegisterDeviceRequest; // @dynamic hasRegisterDeviceRequest;
@property(nonatomic) _Bool hasUpdateSignalsRequest; // @dynamic hasUpdateSignalsRequest;
@property(retain, nonatomic) SCORequestHeader *header; // @dynamic header;
@property(retain, nonatomic) SCOManageMessagesRequest *manageMessagesRequest; // @dynamic manageMessagesRequest;
@property(retain, nonatomic) SCOManageSubscriptionsRequest *manageSubscriptionsRequest; // @dynamic manageSubscriptionsRequest;
@property(retain, nonatomic) SCORegisterDeviceRequest *registerDeviceRequest; // @dynamic registerDeviceRequest;
@property(retain, nonatomic) SCOUpdateSignalsRequest *updateSignalsRequest; // @dynamic updateSignalsRequest;

@end

