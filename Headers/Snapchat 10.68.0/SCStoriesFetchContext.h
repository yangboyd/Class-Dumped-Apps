//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoriesFetchContext : NSObject <NSCopying>
{
    long long _triggerType;
    long long _fetchSource;
    NSString *_fetchTriggerIdentifier;
}

@property(readonly, copy, nonatomic) NSString *fetchTriggerIdentifier; // @synthesize fetchTriggerIdentifier=_fetchTriggerIdentifier;
@property(readonly, nonatomic) long long fetchSource; // @synthesize fetchSource=_fetchSource;
@property(readonly, nonatomic) long long triggerType; // @synthesize triggerType=_triggerType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTriggerType:(long long)arg1 fetchSource:(long long)arg2 fetchTriggerIdentifier:(id)arg3;

@end

