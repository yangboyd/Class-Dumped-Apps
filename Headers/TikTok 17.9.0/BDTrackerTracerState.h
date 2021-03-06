//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BDTrackerTracerState : NSObject
{
    NSString *_name;
    unsigned long long _count;
    NSString *_key;
    NSString *_haskey;
    long long _duration;
}

+ (id)hasKeyWithName:(id)arg1 key:(id)arg2;
+ (id)fromDictionary:(id)arg1;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *haskey; // @synthesize haskey=_haskey;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)fromDictionary:(id)arg1;
- (void)addDuration:(long long)arg1;
- (void)setMaxValue:(unsigned long long)arg1;
- (void)addCount:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 key:(id)arg2;

@end

