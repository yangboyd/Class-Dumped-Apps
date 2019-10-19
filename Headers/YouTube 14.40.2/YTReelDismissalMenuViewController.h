//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTGraftingViewController.h"
#import "YTReelDismissalMenuCollectionViewControllerDelegate.h"
#import "YTRendererController.h"

@class GIMMe, NSArray, NSMutableArray, NSString, YTICommand, YTIMultiReelDismissalRenderer, YTReelDismissalMenuCollectionViewController, YTReelDismissalMenuView, YTReelShelfCollection;

@interface YTReelDismissalMenuViewController : UIViewController <YTGraftingViewController, YTReelDismissalMenuCollectionViewControllerDelegate, YTRendererController>
{
    YTReelShelfCollection *_shelfCollection;
    YTReelDismissalMenuCollectionViewController *_collectionVC;
    YTICommand *_navEndpoint;
    YTIMultiReelDismissalRenderer *_renderer;
    NSArray *_items;
    NSMutableArray *_selectedItems;
    YTReelDismissalMenuView *_view;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTReelDismissalMenuViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTReelDismissalMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)dismiss;
- (void)submitAndDismiss;
- (void)updateFromShelfCollection;
- (void)show;
- (void)loadWithModel:(id)arg1;
- (id)navEndpoint;
- (void)didUndoDismissReelItem:(id)arg1;
- (void)didDismissReelItem:(id)arg1;
- (void)loadView;
- (id)initWithShelfCollection:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

