//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDPTTCode;

@interface BDPTTCodeGenerator : NSObject
{
    _Bool _generatingTTCode;
    BDPTTCode *_ttcode;
    long long _failedTimes;
}

+ (id)sharedInstance;
@property(nonatomic) long long failedTimes; // @synthesize failedTimes=_failedTimes;
@property(nonatomic) _Bool generatingTTCode; // @synthesize generatingTTCode=_generatingTTCode;
@property(retain, nonatomic) BDPTTCode *ttcode; // @synthesize ttcode=_ttcode;
- (void).cxx_destruct;
@property(readonly, nonatomic) BDPTTCode *sharedTTcode;
- (id)getSharedTTCode;
- (void)preCreateTTCodeIfNeed;
- (id)generateTTCode;

@end

