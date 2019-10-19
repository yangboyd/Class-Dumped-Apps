//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDLContactCache-Protocol.h"

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface PDLContactStore : NSObject <PDLContactCache>
{
    long long _autocompletionsCount;
    NSMutableOrderedSet *_contactAutocompletions;
    NSMutableDictionary *_contactIndexByFieldValueLookup;
    NSObject<OS_dispatch_queue> *_memoryQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memoryQueue; // @synthesize memoryQueue=_memoryQueue;
@property(retain, nonatomic) NSMutableDictionary *contactIndexByFieldValueLookup; // @synthesize contactIndexByFieldValueLookup=_contactIndexByFieldValueLookup;
@property(retain, nonatomic) NSMutableOrderedSet *contactAutocompletions; // @synthesize contactAutocompletions=_contactAutocompletions;
@property(readonly) long long autocompletionsCount; // @synthesize autocompletionsCount=_autocompletionsCount;
- (void).cxx_destruct;
- (void)addMethodFieldLookupForAutocompletion:(id)arg1 contactIndex:(unsigned long long)arg2;
- (_Bool)isEmpty;
- (void)addAutocompletion:(id)arg1;
- (id)autocompletionsWithMethodFieldValues:(id)arg1;
- (id)allAutocompletions;
- (id)init;

@end

