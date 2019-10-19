//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface FVRAnalyticsSession : NSObject <NSCoding>
{
    NSArray *_eventListDictionary;
    NSMutableArray *_eventListWithoutTimeFix;
    NSString *_userId;
    NSString *_fileName;
    NSNumber *_numberOfFailedSendAttempt;
}

+ (id)listOfAnalyticsEventDictionaries:(id)arg1;
+ (_Bool)fixEventListWithServerTime:(id)arg1;
+ (id)initWithEventList:(id)arg1 userId:(id)arg2 fileName:(id)arg3;
@property(retain) NSNumber *numberOfFailedSendAttempt; // @synthesize numberOfFailedSendAttempt=_numberOfFailedSendAttempt;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain) NSString *userId; // @synthesize userId=_userId;
@property(retain) NSMutableArray *eventListWithoutTimeFix; // @synthesize eventListWithoutTimeFix=_eventListWithoutTimeFix;
@property(retain) NSArray *eventListDictionary; // @synthesize eventListDictionary=_eventListDictionary;
- (void).cxx_destruct;
- (_Bool)didFixingEventListSucceded;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

