//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTSectionViewModelFeedController.h>

#import <Module_Framework/YTUserChangedObserver-Protocol.h>

@class NSString;
@protocol YTCommentSectionFeedControllerDelegate;

@interface YTCommentSectionFeedController : YTSectionViewModelFeedController <YTUserChangedObserver>
{
    _Bool _shouldPreloadData;
    int _numberOfItemsToKeepOnCommentReload;
    id <YTCommentSectionFeedControllerDelegate> _commentSectionFeedControllerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldPreloadData; // @synthesize shouldPreloadData=_shouldPreloadData;
@property(nonatomic) int numberOfItemsToKeepOnCommentReload; // @synthesize numberOfItemsToKeepOnCommentReload=_numberOfItemsToKeepOnCommentReload;
@property(nonatomic) __weak id <YTCommentSectionFeedControllerDelegate> commentSectionFeedControllerDelegate; // @synthesize commentSectionFeedControllerDelegate=_commentSectionFeedControllerDelegate;
- (void)userDidChange;
- (void)handleEntries:(id)arg1;
- (void)reloadData;
- (id)initWithModel:(id)arg1 dataSource:(id)arg2 sectionController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

