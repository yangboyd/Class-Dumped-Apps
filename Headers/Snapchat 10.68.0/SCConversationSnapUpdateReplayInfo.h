//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationSnapUpdateReplayInfo : NSObject <NSCopying>
{
    BOOL _replayType;
    NSString *_stackId;
}

@property(readonly, copy, nonatomic) NSString *stackId; // @synthesize stackId=_stackId;
@property(readonly, nonatomic) BOOL replayType; // @synthesize replayType=_replayType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReplayType:(BOOL)arg1 stackId:(id)arg2;

@end

