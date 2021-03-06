//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESIMConversationFilterProtocol-Protocol.h"

@class AWEStorage, NSString;

@interface IESIMConversationFilter : NSObject <IESIMConversationFilterProtocol>
{
    NSString *_currentUid;
    AWEStorage *_storage;
}

@property(retain, nonatomic) AWEStorage *storage; // @synthesize storage=_storage;
@property(copy, nonatomic) NSString *currentUid; // @synthesize currentUid=_currentUid;
- (void).cxx_destruct;
- (void)p_syncFilterConversationDict:(id)arg1;
- (id)filterConversationDictOfCurrentUser;
- (_Bool)removeFilterConversationUser:(id)arg1 ofConversation:(id)arg2;
- (void)setFilterConversationUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

