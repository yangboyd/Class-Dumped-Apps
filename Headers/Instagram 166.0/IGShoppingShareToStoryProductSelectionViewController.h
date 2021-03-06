//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListSingleSectionControllerDelegate-Protocol.h>

@class IGListAdapter, IGUserSession, NSArray, NSString, UICollectionView;
@protocol IGShoppingShareToStoryProductSelectionViewControllerDelegate;

@interface IGShoppingShareToStoryProductSelectionViewController : IGViewController <IGGestureHandler, IGListAdapterDataSource, IGListSingleSectionControllerDelegate>
{
    IGUserSession *_userSession;
    NSArray *_productItems;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
    id <IGShoppingShareToStoryProductSelectionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingShareToStoryProductSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)didSelectSectionController:(id)arg1 withObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 productItems:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

