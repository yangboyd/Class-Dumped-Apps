//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCChatMessageAnimationData : NSObject <NSCopying>
{
    unsigned long long _saveAnimationState;
    long long _replayAnimationState;
}

@property(readonly, nonatomic) long long replayAnimationState; // @synthesize replayAnimationState=_replayAnimationState;
@property(readonly, nonatomic) unsigned long long saveAnimationState; // @synthesize saveAnimationState=_saveAnimationState;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSaveAnimationState:(unsigned long long)arg1 replayAnimationState:(long long)arg2;

@end

