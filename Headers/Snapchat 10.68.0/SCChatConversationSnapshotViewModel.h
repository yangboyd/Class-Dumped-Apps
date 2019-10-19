//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCChatConversationMessageIdSnapshot, SCChatConversationSnapshotViewModelV3;

@interface SCChatConversationSnapshotViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCChatConversationSnapshotViewModelV3 *_v3Snapshot_v3Snapshot;
    SCChatConversationMessageIdSnapshot *_messageIdSnapshot_messageIdSnapshot;
}

+ (id)v3SnapshotWithV3Snapshot:(id)arg1;
+ (id)messageIdSnapshotWithMessageIdSnapshot:(id)arg1;
- (void).cxx_destruct;
- (void)matchV3Snapshot:(CDUnknownBlockType)arg1 messageIdSnapshot:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

