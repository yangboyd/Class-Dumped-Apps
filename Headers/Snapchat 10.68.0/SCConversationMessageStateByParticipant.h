//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCConversationMessageSaveState;

@interface SCConversationMessageStateByParticipant : NSObject <NSCopying>
{
    _Bool _preserved;
    NSString *_participant;
    double _releaseInEpochSecs;
    SCConversationMessageSaveState *_saveState;
}

@property(readonly, nonatomic) _Bool preserved; // @synthesize preserved=_preserved;
@property(readonly, copy, nonatomic) SCConversationMessageSaveState *saveState; // @synthesize saveState=_saveState;
@property(readonly, nonatomic) double releaseInEpochSecs; // @synthesize releaseInEpochSecs=_releaseInEpochSecs;
@property(readonly, copy, nonatomic) NSString *participant; // @synthesize participant=_participant;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParticipant:(id)arg1 releaseInEpochSecs:(double)arg2 saveState:(id)arg3 preserved:(_Bool)arg4;

@end

