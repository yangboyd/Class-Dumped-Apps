//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class EIDEventIdMessage, GPBInt32Array, NSMutableArray, NSString;

@interface YTIRequestInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *consistencyTokenJarsArray; // @dynamic consistencyTokenJarsArray;
@property(readonly, nonatomic) unsigned long long consistencyTokenJarsArray_Count; // @dynamic consistencyTokenJarsArray_Count;
@property(nonatomic) _Bool disablePrefetch; // @dynamic disablePrefetch;
@property(retain, nonatomic) EIDEventIdMessage *eventId; // @dynamic eventId;
@property(nonatomic) _Bool hasDisablePrefetch; // @dynamic hasDisablePrefetch;
@property(nonatomic) _Bool hasEventId; // @dynamic hasEventId;
@property(nonatomic) _Bool hasIfNoneMatch; // @dynamic hasIfNoneMatch;
@property(nonatomic) _Bool hasInnertubez; // @dynamic hasInnertubez;
@property(nonatomic) _Bool hasIsDarkLaunch; // @dynamic hasIsDarkLaunch;
@property(nonatomic) _Bool hasIsPrefetch; // @dynamic hasIsPrefetch;
@property(nonatomic) _Bool hasMdxControlMode; // @dynamic hasMdxControlMode;
@property(nonatomic) _Bool hasMdxEnvironment; // @dynamic hasMdxEnvironment;
@property(nonatomic) _Bool hasParentEventId; // @dynamic hasParentEventId;
@property(nonatomic) _Bool hasReturnDebugData; // @dynamic hasReturnDebugData;
@property(nonatomic) _Bool hasReturnErrorDetail; // @dynamic hasReturnErrorDetail;
@property(nonatomic) _Bool hasReturnLogEntry; // @dynamic hasReturnLogEntry;
@property(nonatomic) _Bool hasReturnLogEntryJson; // @dynamic hasReturnLogEntryJson;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasSessionIndex; // @dynamic hasSessionIndex;
@property(nonatomic) _Bool hasSherlogUsername; // @dynamic hasSherlogUsername;
@property(nonatomic) _Bool hasThirdPartyDigest; // @dynamic hasThirdPartyDigest;
@property(nonatomic) _Bool hasTraceProto; // @dynamic hasTraceProto;
@property(nonatomic) _Bool hasUseSsl; // @dynamic hasUseSsl;
@property(nonatomic) _Bool hasWriteLogEntry; // @dynamic hasWriteLogEntry;
@property(copy, nonatomic) NSString *ifNoneMatch; // @dynamic ifNoneMatch;
@property(copy, nonatomic) NSString *innertubez; // @dynamic innertubez;
@property(retain, nonatomic) NSMutableArray *internalExperimentFlagsArray; // @dynamic internalExperimentFlagsArray;
@property(readonly, nonatomic) unsigned long long internalExperimentFlagsArray_Count; // @dynamic internalExperimentFlagsArray_Count;
@property(nonatomic) _Bool isDarkLaunch; // @dynamic isDarkLaunch;
@property(nonatomic) _Bool isPrefetch; // @dynamic isPrefetch;
@property(retain, nonatomic) GPBInt32Array *itfeExperimentIdsArray; // @dynamic itfeExperimentIdsArray;
@property(readonly, nonatomic) unsigned long long itfeExperimentIdsArray_Count; // @dynamic itfeExperimentIdsArray_Count;
@property(nonatomic) int mdxControlMode; // @dynamic mdxControlMode;
@property(nonatomic) int mdxEnvironment; // @dynamic mdxEnvironment;
@property(retain, nonatomic) EIDEventIdMessage *parentEventId; // @dynamic parentEventId;
@property(nonatomic) _Bool returnDebugData; // @dynamic returnDebugData;
@property(nonatomic) _Bool returnErrorDetail; // @dynamic returnErrorDetail;
@property(nonatomic) _Bool returnLogEntry; // @dynamic returnLogEntry;
@property(nonatomic) _Bool returnLogEntryJson; // @dynamic returnLogEntryJson;
@property(nonatomic) unsigned long long sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned long long sessionIndex; // @dynamic sessionIndex;
@property(copy, nonatomic) NSString *sherlogUsername; // @dynamic sherlogUsername;
@property(copy, nonatomic) NSString *thirdPartyDigest; // @dynamic thirdPartyDigest;
@property(nonatomic) _Bool traceProto; // @dynamic traceProto;
@property(nonatomic) _Bool useSsl; // @dynamic useSsl;
@property(nonatomic) _Bool writeLogEntry; // @dynamic writeLogEntry;

@end

