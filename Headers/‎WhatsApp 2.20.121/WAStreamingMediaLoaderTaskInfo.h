//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface WAStreamingMediaLoaderTaskInfo : NSObject
{
    _Bool _userInitiated;
    unsigned int _totalMediaSize;
    NSDate *_queuedDate;
    unsigned long long _attemptCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(readonly, nonatomic) NSDate *queuedDate; // @synthesize queuedDate=_queuedDate;
@property(readonly, nonatomic) unsigned int totalMediaSize; // @synthesize totalMediaSize=_totalMediaSize;
@property(readonly, nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
- (void)resetQueueTime;
- (id)initWithUserInitated:(_Bool)arg1 totalMediaSize:(unsigned int)arg2 queuedDate:(id)arg3 attemptCount:(unsigned long long)arg4;

@end

