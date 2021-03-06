//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGDirectComposerMode : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    _Bool _text_containsOnlySingleEmoji;
    _Bool _text_isReplyingToMessage;
    _Bool _text_matchesQuickReply;
    long long _search_searchMode;
}

+ (id)textWithContainsOnlySingleEmoji:(_Bool)arg1 isReplyingToMessage:(_Bool)arg2 matchesQuickReply:(_Bool)arg3;
+ (id)searchWithSearchMode:(long long)arg1;
+ (id)none;
+ (id)expanded;
+ (id)base;
- (void)matchNone:(CDUnknownBlockType)arg1 base:(CDUnknownBlockType)arg2 text:(CDUnknownBlockType)arg3 search:(CDUnknownBlockType)arg4 expanded:(CDUnknownBlockType)arg5;
- (_Bool)matchBooleanNone:(CDUnknownBlockType)arg1 base:(CDUnknownBlockType)arg2 text:(CDUnknownBlockType)arg3 search:(CDUnknownBlockType)arg4 expanded:(CDUnknownBlockType)arg5;

@end

