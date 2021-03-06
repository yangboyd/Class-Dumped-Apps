//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGALTapGestureRecognizer, IGShoppingPDPSecondaryActionSectionViewModel, UIImageView, UILabel;
@protocol IGShoppingPDPSecondaryActionCellDelegate;

@interface IGShoppingPDPSecondaryActionCell : UICollectionViewCell
{
    IGShoppingPDPSecondaryActionSectionViewModel *_viewModel;
    UILabel *_titleLabel;
    UIImageView *_chevronView;
    IGALTapGestureRecognizer *_tapRecognizer;
    id <IGShoppingPDPSecondaryActionCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingPDPSecondaryActionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForReuse;
- (void)configureWithViewModel:(id)arg1;
- (void)_didTapButton:(id)arg1;
- (void)setEnableAutomatedLogging:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

