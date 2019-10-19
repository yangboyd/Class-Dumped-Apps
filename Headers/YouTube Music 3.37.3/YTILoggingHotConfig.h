//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICsiConfig, YTIDrpConfig, YTIEventLoggingConfig, YTIInteractionLoggingConfig, YTILoggingHeartbeatConfig;

@interface YTILoggingHotConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICsiConfig *csiConfig; // @dynamic csiConfig;
@property(retain, nonatomic) YTIDrpConfig *drpConfig; // @dynamic drpConfig;
@property(retain, nonatomic) YTIEventLoggingConfig *eventLoggingConfig; // @dynamic eventLoggingConfig;
@property(nonatomic) _Bool hasCsiConfig; // @dynamic hasCsiConfig;
@property(nonatomic) _Bool hasDrpConfig; // @dynamic hasDrpConfig;
@property(nonatomic) _Bool hasEventLoggingConfig; // @dynamic hasEventLoggingConfig;
@property(nonatomic) _Bool hasInteractionLoggingConfig; // @dynamic hasInteractionLoggingConfig;
@property(nonatomic) _Bool hasLoggingHeartbeatConfig; // @dynamic hasLoggingHeartbeatConfig;
@property(retain, nonatomic) YTIInteractionLoggingConfig *interactionLoggingConfig; // @dynamic interactionLoggingConfig;
@property(retain, nonatomic) YTILoggingHeartbeatConfig *loggingHeartbeatConfig; // @dynamic loggingHeartbeatConfig;

@end

