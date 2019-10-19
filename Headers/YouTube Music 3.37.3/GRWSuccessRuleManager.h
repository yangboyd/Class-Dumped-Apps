//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData, NSMutableDictionary, NSURL;
@protocol GRWSuccessFileManagerProtocol, GRWSuccessLogSenderProtocol, GRWSuccessNowProtocol;

@interface GRWSuccessRuleManager : NSObject <NSCoding, NSSecureCoding>
{
    _Bool _needSaving;
    id <GRWSuccessFileManagerProtocol> _fileManager;
    id <GRWSuccessNowProtocol> _clock;
    NSMutableDictionary *_eventToSuccessItems;
    NSMutableDictionary *_expirationTimes;
    id <GRWSuccessLogSenderProtocol> _logSender;
}

+ (id)removeUnreferencedExpirationTimes:(id)arg1 withItems:(id)arg2;
+ (id)removeItems:(id)arg1 expirationTimes:(id)arg2 olderThan:(double)arg3;
+ (id)sharedInstance;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id <GRWSuccessLogSenderProtocol> logSender; // @synthesize logSender=_logSender;
@property(retain, nonatomic) NSMutableDictionary *expirationTimes; // @synthesize expirationTimes=_expirationTimes;
@property(retain, nonatomic) NSMutableDictionary *eventToSuccessItems; // @synthesize eventToSuccessItems=_eventToSuccessItems;
@property(retain, nonatomic) id <GRWSuccessNowProtocol> clock; // @synthesize clock=_clock;
@property(retain, nonatomic) id <GRWSuccessFileManagerProtocol> fileManager; // @synthesize fileManager=_fileManager;
@property(nonatomic) _Bool needSaving; // @synthesize needSaving=_needSaving;
- (void).cxx_destruct;
- (void)handleWillResignActiveNotification:(id)arg1;
- (void)handleDidBecomeActiveNotification:(id)arg1;
@property(readonly, nonatomic) NSURL *fileURL;
@property(readonly, nonatomic) NSData *asData;
- (void)save;
- (void)load;
- (double)timeIntervalSinceReferenceDate;
- (void)updateExpirations;
- (void)logSuccess:(id)arg1;
- (void)logMessageIfEventMeansSuccess:(id)arg1;
- (id)successItemsForEvent:(id)arg1;
- (void)messageDidPresent:(id)arg1 counterfactually:(_Bool)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 clock:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initPrivate;
- (id)init;

@end

