//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface ACTAggregatedMetricData : NSObject
{
    NSString *_name;
    long long _duration;
    long long _count;
    NSString *_units;
    NSString *_instanceName;
    NSString *_objectClass;
    NSString *_objectId;
    NSMutableDictionary *_aggregates;
    NSMutableDictionary *_buckets;
}

@property(retain, nonatomic) NSMutableDictionary *buckets; // @synthesize buckets=_buckets;
@property(retain, nonatomic) NSMutableDictionary *aggregates; // @synthesize aggregates=_aggregates;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSString *objectClass; // @synthesize objectClass=_objectClass;
@property(retain, nonatomic) NSString *instanceName; // @synthesize instanceName=_instanceName;
@property(retain, nonatomic) NSString *units; // @synthesize units=_units;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 duration:(long long)arg2 count:(long long)arg3;

@end

