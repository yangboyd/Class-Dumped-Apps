//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UAPreferenceDataStore;

@interface UAPersistentQueue : NSObject
{
    UAPreferenceDataStore *_dataStore;
    NSString *_key;
}

+ (id)persistentQueueWithDataStore:(id)arg1 key:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void)clear;
- (void)setObjects:(id)arg1;
- (id)objects;
- (id)popObject;
- (id)peekObject;
- (void)addObjects:(id)arg1;
- (void)addObject:(id)arg1;
- (id)initWithDataStore:(id)arg1 key:(id)arg2;

@end

