//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MslDataArray, NSConditionLock, NSString;

@interface MslHttpResponseStream : NSObject
{
    _Bool _gotEof;
    NSString *_logPrefix;
    MslDataArray *_dataToBeRead;
    unsigned long long _offset;
    NSConditionLock *_conditionLock;
}

@property(retain) NSConditionLock *conditionLock; // @synthesize conditionLock=_conditionLock;
@property _Bool gotEof; // @synthesize gotEof=_gotEof;
@property unsigned long long offset; // @synthesize offset=_offset;
@property(retain) MslDataArray *dataToBeRead; // @synthesize dataToBeRead=_dataToBeRead;
@property(retain, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
- (void).cxx_destruct;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)appendData:(id)arg1;
- (void)_unlockWithAppropriateCondition;
- (void)dealloc;
- (id)init;

@end

