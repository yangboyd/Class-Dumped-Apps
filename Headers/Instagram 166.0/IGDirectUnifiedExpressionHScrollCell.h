//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGAnimatedStickerSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectAnimatedMediaSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectPowerupTextMessageSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGLikeStickerSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>

@class IGDirectAnimatedMediaLogger, IGDirectUnifiedExpressionHScrollViewModel, IGLabel, IGListAdapter, IGUserSession, NSString, UICollectionView;
@protocol IGDirectUnifiedExpressionHScrollCellDelegate;

@interface IGDirectUnifiedExpressionHScrollCell : UICollectionViewCell <IGAnimatedStickerSectionControllerDelegate, IGDirectAnimatedMediaSectionControllerDelegate, IGDirectPowerupTextMessageSectionControllerDelegate, IGLikeStickerSectionControllerDelegate, IGListAdapterDataSource>
{
    UICollectionView *_collectionView;
    IGLabel *_descriptionLabel;
    IGListAdapter *_listAdapter;
    IGUserSession *_userSession;
    IGDirectUnifiedExpressionHScrollViewModel *_viewModel;
    IGDirectAnimatedMediaLogger *_animatedMediaLogger;
    double _messageListHeight;
    double _composerHeight;
    id <IGDirectUnifiedExpressionHScrollCellDelegate> _delegate;
}

+ (double)heightForDescriptionText:(id)arg1 constrainedToWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectUnifiedExpressionHScrollCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)powerupTextMessageSectionController:(id)arg1 didSelectMessageEffect:(id)arg2 text:(id)arg3;
- (void)animatedStickerSectionController:(id)arg1 didSelectAnimatedSticker:(id)arg2;
- (void)animatedMediaSectionController:(id)arg1 didSelectAnimatedMedia:(id)arg2;
- (void)likeStickerSectionControllerDidTapLike:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1 viewController:(id)arg2 userSession:(id)arg3 animatedMediaLogger:(id)arg4 analyticsModule:(id)arg5 messageListHeight:(double)arg6 composerHeight:(double)arg7;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

