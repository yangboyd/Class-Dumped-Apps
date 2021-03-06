//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMDRecordStoreObject-Protocol.h"

@class NSString;

@interface HMDControllerTimeRecord : NSObject <HMDRecordStoreObject>
{
    unsigned long long _localID;
    NSString *_sessionID;
    double _timestamp;
    double _inAppTime;
    NSString *_pageName;
    NSString *_typeName;
    double _timeInterval;
    unsigned long long _isReported;
    unsigned long long _isFirstOpen;
}

+ (unsigned long long)cleanupWeight;
+ (id)tableName;
+ (id)newRecord;
@property(nonatomic) unsigned long long isFirstOpen; // @synthesize isFirstOpen=_isFirstOpen;
@property(nonatomic) unsigned long long isReported; // @synthesize isReported=_isReported;
@property(nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) double inAppTime; // @synthesize inAppTime=_inAppTime;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long localID; // @synthesize localID=_localID;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

