//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface GRWSFlowBasedEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appPackageName; // @dynamic appPackageName;
@property(nonatomic) int flowId; // @dynamic flowId;
@property(nonatomic) int flowSubEventCode; // @dynamic flowSubEventCode;
@property(nonatomic) _Bool hasAppPackageName; // @dynamic hasAppPackageName;
@property(nonatomic) _Bool hasFlowId; // @dynamic hasFlowId;
@property(nonatomic) _Bool hasFlowSubEventCode; // @dynamic hasFlowSubEventCode;

@end

