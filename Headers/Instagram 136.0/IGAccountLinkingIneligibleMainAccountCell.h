//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListItemCollectionViewCell.h>

@class IGListItemView, IGProfilePasswordDotsAndTrailingButtonViewProvider, UIButton;
@protocol IGAccountLinkingIneligibleMainAccountCellDelegate;

@interface IGAccountLinkingIneligibleMainAccountCell : IGListItemCollectionViewCell
{
    IGProfilePasswordDotsAndTrailingButtonViewProvider *_cellItemViewProvider;
    IGListItemView *_itemView;
    UIButton *_infoButton;
    id <IGAccountLinkingIneligibleMainAccountCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didTapInfoButton;
- (void)configureCellWithProfileImage:(id)arg1 userName:(id)arg2 selected:(_Bool)arg3 delegate:(id)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

