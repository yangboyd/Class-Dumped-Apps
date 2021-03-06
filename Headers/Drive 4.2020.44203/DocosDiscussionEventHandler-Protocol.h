//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol DocosDiscussionAuthor, DocosDiscussionUI, DocosReplyPostEntry;

@protocol DocosDiscussionEventHandler
@property(nonatomic) __weak id <DocosDiscussionUI> discussionUI;
- (void)cancelDraft;
- (void)cancelEdit;
- (void)cancelReply;
- (void)savePost:(id <DocosReplyPostEntry>)arg1 withContent:(NSString *)arg2;
- (void)savePostAtIndex:(long long)arg1 withContent:(NSString *)arg2;
- (void)saveDraftWithContent:(NSString *)arg1 assignee:(id <DocosDiscussionAuthor>)arg2 anchorId:(NSString *)arg3 quote:(NSString *)arg4;
- (void)saveReplyWithContent:(NSString *)arg1 assignee:(id <DocosDiscussionAuthor>)arg2;
- (void)editPostAtIndex:(long long)arg1;
- (void)composeReply;
- (void)undoAcceptRejectSuggestion;
- (void)rejectSuggestion;
- (void)acceptSuggestion;
- (void)undoReopen;
- (void)undoMarkDone;
- (void)undoResolve;
- (void)reopen;
- (void)markDone;
- (void)resolve;
- (void)deletePostAtIndex:(long long)arg1;
@end

