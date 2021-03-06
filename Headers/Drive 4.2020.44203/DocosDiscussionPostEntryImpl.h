//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DocosDiscussionPostEntry-Protocol.h"

@class ComGoogleCommonBaseOptional, DocosDiscussionAction, DocosDiscussionOrigin, NSString;
@protocol DocosAssignment, DocosDiscussionAuthor, DocosPostEntryId, JavaUtilList;

@interface DocosDiscussionPostEntryImpl : NSObject <DocosDiscussionPostEntry>
{
    id <DocosPostEntryId> id__;
    long long publishedMs_;
    long long updatedMs_;
    _Bool deleted_;
    _Bool discussionDirty_;
    _Bool dirty_;
    NSString *contentHtml_;
    NSString *content_;
    NSString *anchorId_;
    _Bool authorIsAuthenticatedUser_;
    _Bool resolved_;
    id <DocosDiscussionAuthor> author_;
    NSString *threadQuote_;
    NSString *serializedQuoteProto_;
    NSString *suggestionId_;
    DocosDiscussionOrigin *origin_;
    id <DocosAssignment> assignment_;
    DocosDiscussionAction *action_;
    _Bool fromComparison_;
    id <JavaUtilList> replies_;
    NSString *itemId_;
    id <JavaUtilList> repliesView_;
    ComGoogleCommonBaseOptional *lastCopiedPostEntry_;
    id <DocosAssignment> currentAssignment_;
}

+ (id)toApiaryDiscussionWithDocosDiscussionPostEntry:(id)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getLastCopiedPostEntry;
- (id)getCurrentAssignment;
- (_Bool)isTodo;
- (_Bool)isDiscussionResolved;
- (id)getReplies;
- (_Bool)isFromComparison;
- (id)getAction;
- (id)getAssignment;
- (id)getOrigin;
- (id)getSuggestionId;
- (_Bool)hasSuggestionId;
- (id)getSerializedQuoteProto;
- (id)getItemId;
- (id)getThreadQuote;
- (id)getAnchorId;
- (_Bool)isDirty;
- (_Bool)isDiscussionDirty;
- (id)getContent;
- (id)getContentHtml;
- (_Bool)isDeleted;
- (long long)getUpdatedMs;
- (long long)getPublishedMs;
- (_Bool)isAuthoredByAuthenticatedUser;
- (id)getAuthor;
- (id)getPostEntryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

