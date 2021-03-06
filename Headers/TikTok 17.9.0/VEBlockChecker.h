//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESMMObject, NSMutableArray, NSRecursiveLock, NSString;
@protocol IESMMTrackerHelperProtocol;

@interface VEBlockChecker : NSObject
{
    CDUnknownBlockType _delaydBlockHandle;
    id <IESMMTrackerHelperProtocol> trackerHelper;
    double _blockTime;
    NSMutableArray *_startTimes;
    IESMMObject *_blockCheckQueue;
    NSRecursiveLock *_lock;
    NSString *_anrMsg;
}

@property(retain, nonatomic) NSString *anrMsg; // @synthesize anrMsg=_anrMsg;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) IESMMObject *blockCheckQueue; // @synthesize blockCheckQueue=_blockCheckQueue;
@property(retain, nonatomic) NSMutableArray *startTimes; // @synthesize startTimes=_startTimes;
@property(nonatomic) double blockTime; // @synthesize blockTime=_blockTime;
- (void).cxx_destruct;
- (void)doBlock;
- (void)popBlockCheck;
- (void)pushBlockCheck:(id)arg1;
- (void)heartbeatLastWithStartTag:(double)arg1;
- (void)heartbeatWithStartTag:(double)arg1;
- (void)pushBlockCheck;
- (id)initWithBlockTime:(double)arg1;

@end

