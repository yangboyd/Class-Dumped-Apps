//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCChatStickerManagerListener-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, SCCircumstanceEngine, SCUserSession, UICollectionView, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol SCStickerStoryReplyViewControllerDelegate;

@interface SCStickerStoryReplyViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate, SCChatStickerManagerListener>
{
    UICollectionView *_collectionView;
    SCUserSession *_userSession;
    double _preferredCount;
    NSArray *_stickers;
    NSArray *_storyReplyStickersFromConfig;
    _Bool _isDisplayingStickerSearch;
    _Bool _replyBarActive;
    UISwipeGestureRecognizer *_barSwipeGestureRecognizer;
    UITapGestureRecognizer *_barTapGestureRecognizer;
    NSMutableDictionary *_viewedPretypeStickers;
    NSMutableSet *_viewedPosttypeStickerIds;
    id <SCStickerStoryReplyViewControllerDelegate> _delegate;
    SCCircumstanceEngine *_circumstanceEngine;
}

@property(retain, nonatomic) SCCircumstanceEngine *circumstanceEngine; // @synthesize circumstanceEngine=_circumstanceEngine;
@property(nonatomic) __weak id <SCStickerStoryReplyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_activateStickerReplyView;
- (void)_logStickerViewedEvent;
- (void)_resetStickerViewedParams;
- (void)_updateWithStickers:(id)arg1 fromStickerSearch:(_Bool)arg2;
- (void)_updateWithConfig:(id)arg1;
- (void)_updateStoryReplyStickersFromManager;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)stickerPackagesDidChangeWithCategoryType:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)hide;
- (void)show;
- (void)resetStickers;
- (void)updateWithStickerSearch:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (double)preferredViewHeight;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

