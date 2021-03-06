//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DSKStreamController.h"

#import "ASTMenuAnimationTableViewCellDelegate-Protocol.h"
#import "ASTMenuAttributedTextTableViewCellDelegate-Protocol.h"
#import "ASTMenuCollectionViewDelegate-Protocol.h"
#import "ASTMenuIconTableViewCellDelegate-Protocol.h"
#import "ASTMenuNewsTableViewCellDelegate-Protocol.h"

@class NSCache, NSString;
@protocol ASTMenuStreamControllerDelegate, UIScrollViewDelegate;

@interface ASTMenuStreamController : DSKStreamController <ASTMenuAnimationTableViewCellDelegate, ASTMenuIconTableViewCellDelegate, ASTMenuNewsTableViewCellDelegate, ASTMenuCollectionViewDelegate, ASTMenuAttributedTextTableViewCellDelegate>
{
    id <ASTMenuStreamControllerDelegate> _delegate;
    id <UIScrollViewDelegate> _scrollDelegate;
    double _estimatedRowHeight;
    NSCache *_cellHeightCache;
}

- (void).cxx_destruct;
@property(retain) NSCache *cellHeightCache; // @synthesize cellHeightCache=_cellHeightCache;
@property(nonatomic) double estimatedRowHeight; // @synthesize estimatedRowHeight=_estimatedRowHeight;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <ASTMenuStreamControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)cellHeightCacheKeyForStreamItem:(id)arg1;
- (_Bool)isDraggableStreamItem:(id)arg1;
- (void)attributedTextTableViewCell:(id)arg1 didChangeSwitchControlValue:(_Bool)arg2;
- (void)collectionViewDidEndScrolling:(id)arg1 atStreamItemInCenter:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItem:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableViewCell:(id)arg1 didSwipe:(id)arg2;
- (void)tableViewCell:(id)arg1 didLongPress:(id)arg2;
- (void)tableViewCell:(id)arg1 didChangeCheckboxControlValue:(_Bool)arg2;
- (void)tableViewCell:(id)arg1 didChangeSwitchControlValue:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableViewCellForSettingsItem:(id)arg1;
- (id)settingsItemForTableViewCell:(id)arg1;
- (id)settingsItemForUUID:(id)arg1;
- (void)showSettingsItemAtTop:(id)arg1 animated:(_Bool)arg2;
- (void)reloadItems:(id)arg1;
- (void)addSections:(id)arg1;
- (void)addItems:(id)arg1;
- (id)itemIndexPathWithUUID:(id)arg1;
- (void)removeAllItems;
- (void)removeItemWithUUID:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)insertItems:(id)arg1 atIndexPaths:(id)arg2;
- (void)insertItems:(id)arg1 after:(id)arg2;
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2;
- (void)insertItem:(id)arg1 before:(id)arg2;
- (void)insertItem:(id)arg1 after:(id)arg2;
- (void)updateItems:(id)arg1 withRowAnimation:(long long)arg2;
- (void)updateItems:(id)arg1;
- (void)updateItem:(id)arg1;
- (_Bool)containsItemWithUUID:(id)arg1;
- (_Bool)isContainItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

