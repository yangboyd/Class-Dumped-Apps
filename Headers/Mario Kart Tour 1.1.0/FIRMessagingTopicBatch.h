//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary, NSMutableSet;

@interface FIRMessagingTopicBatch : NSObject <NSCoding>
{
    long long _action;
    NSMutableSet *_topics;
    NSMutableDictionary *_topicHandlers;
}

@property(retain, nonatomic) NSMutableDictionary *topicHandlers; // @synthesize topicHandlers=_topicHandlers;
@property(readonly, copy, nonatomic) NSMutableSet *topics; // @synthesize topics=_topics;
@property(readonly, nonatomic) long long action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAction:(long long)arg1;

@end

