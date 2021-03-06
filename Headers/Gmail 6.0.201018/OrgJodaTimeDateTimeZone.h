//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"

@class NSString;

@interface OrgJodaTimeDateTimeZone : NSObject <JavaIoSerializable>
{
    NSString *iID_;
}

+ (void)initialize;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (id)toTimeZone;
- (long long)adjustOffsetWithLong:(long long)arg1 withBoolean:(_Bool)arg2;
- (_Bool)isLocalDateTimeGapWithOrgJodaTimeLocalDateTime:(id)arg1;
- (long long)getMillisKeepLocalWithOrgJodaTimeDateTimeZone:(id)arg1 withLong:(long long)arg2;
- (long long)convertLocalToUTCWithLong:(long long)arg1 withBoolean:(_Bool)arg2;
- (long long)convertLocalToUTCWithLong:(long long)arg1 withBoolean:(_Bool)arg2 withLong:(long long)arg3;
- (long long)convertUTCToLocalWithLong:(long long)arg1;
- (int)getOffsetFromLocalWithLong:(long long)arg1;
- (_Bool)isStandardOffsetWithLong:(long long)arg1;
- (int)getOffsetWithOrgJodaTimeReadableInstant:(id)arg1;
- (id)getNameWithLong:(long long)arg1 withJavaUtilLocale:(id)arg2;
- (id)getNameWithLong:(long long)arg1;
- (id)getShortNameWithLong:(long long)arg1 withJavaUtilLocale:(id)arg2;
- (id)getShortNameWithLong:(long long)arg1;
- (id)getID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

