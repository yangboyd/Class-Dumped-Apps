//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/RUIActionSheetViewController.h>

#import "RUIActionSheetViewControllerDelegate-Protocol.h"

@class Comment, NSString, Post;
@protocol CommentModerateActionSheetDelegate;

@interface CommentModerateActionSheetViewController : RUIActionSheetViewController <RUIActionSheetViewControllerDelegate>
{
    Comment *_comment;
    id <CommentModerateActionSheetDelegate> _commentModerateActionSheetDelegate;
    Post *_post;
}

@property(retain, nonatomic) Post *post; // @synthesize post=_post;
@property(nonatomic) __weak id <CommentModerateActionSheetDelegate> commentModerateActionSheetDelegate; // @synthesize commentModerateActionSheetDelegate=_commentModerateActionSheetDelegate;
@property(retain, nonatomic) Comment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (void)logAnalyticsForRUIActionSheetItemSelection:(id)arg1 comment:(id)arg2;
- (void)viewReports;
- (void)modUnlockComment:(id)arg1;
- (void)modLockComment:(id)arg1;
- (void)modApproveComment:(id)arg1;
- (void)modRemoveComment:(id)arg1 asSpam:(_Bool)arg2;
- (void)removeDistinguishComment:(id)arg1;
- (void)performDistinguishComment:(id)arg1 forDistinguishType:(long long)arg2 sticky:(_Bool)arg3;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (id)initWithComment:(id)arg1 parentPost:(id)arg2 customActions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

