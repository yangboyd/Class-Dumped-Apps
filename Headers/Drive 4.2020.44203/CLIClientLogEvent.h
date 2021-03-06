//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class CLIClientEventMetadata, LogRecordProto, NSData, NSMutableArray, NSString;

@interface CLIClientLogEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *allowedParametersArray; // @dynamic allowedParametersArray;
@property(readonly, nonatomic) unsigned long long allowedParametersArray_Count; // @dynamic allowedParametersArray_Count;
@property(copy, nonatomic) NSString *componentId; // @dynamic componentId;
@property(nonatomic) long long count; // @dynamic count;
@property(copy, nonatomic) NSData *customData; // @dynamic customData;
@property(nonatomic) _Bool hasComponentId; // @dynamic hasComponentId;
@property(nonatomic) _Bool hasCount; // @dynamic hasCount;
@property(nonatomic) _Bool hasCustomData; // @dynamic hasCustomData;
@property(nonatomic) _Bool hasLogRecord; // @dynamic hasLogRecord;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasSamplingRate; // @dynamic hasSamplingRate;
@property(retain, nonatomic) LogRecordProto *logRecord; // @dynamic logRecord;
@property(retain, nonatomic) CLIClientEventMetadata *metadata; // @dynamic metadata;
@property(nonatomic) double samplingRate; // @dynamic samplingRate;

@end

