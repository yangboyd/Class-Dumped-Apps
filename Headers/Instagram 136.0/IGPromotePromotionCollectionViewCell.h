//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGPromotePromotionActionButtonViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPromotePromotionSummaryCellViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGPromotePromotionViewInsightsViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGPromoteManagerRejectionDataModel, IGPromotePromotionActionButton, IGPromotePromotionSummaryView, IGPromotePromotionTimeRemainingView, IGPromotePromotionViewInsightsView, NSString, UIView;
@protocol IGPromotePromotionCollectionViewCellDelegate;

@interface IGPromotePromotionCollectionViewCell : UICollectionViewCell <IGPromotePromotionActionButtonViewDelegate, IGPromotePromotionViewInsightsViewDelegate, IGPromotePromotionSummaryCellViewDelegate, UIGestureRecognizerDelegate>
{
    NSString *_mediaId;
    NSString *_boostedId;
    NSString *_organicMediaFbId;
    UIView *_separatorView;
    IGPromotePromotionTimeRemainingView *_timeRemainingView;
    IGPromotePromotionActionButton *_actionButton;
    IGPromotePromotionSummaryView *_summaryView;
    IGPromotePromotionViewInsightsView *_viewInsightsCellView;
    IGPromoteManagerRejectionDataModel *_rejectionDataModel;
    id <IGPromotePromotionCollectionViewCellDelegate> _delegate;
}

+ (double)preferredHeightForCell;
@property(nonatomic) __weak id <IGPromotePromotionCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)promotionDidTapThumbnail;
- (void)promotionDidTapViewInsights;
- (void)promotionDidTapAppeal;
- (void)promotionDidTapPromotionAgain;
- (void)promotionDidTapResumeWithCompletion:(CDUnknownBlockType)arg1;
- (void)promotionDidTapPauseWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1 module:(id)arg2;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

