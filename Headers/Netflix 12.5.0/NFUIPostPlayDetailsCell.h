//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NFUIListButton, NFUIVideoMetadataView, NSLayoutConstraint, PlayButton, UIImageViewAligned, UILabel;

@interface NFUIPostPlayDetailsCell : UICollectionViewCell
{
    NSLayoutConstraint *_textLogoLeadingConstraint;
    NSLayoutConstraint *_myListBottomConstraint;
    NSLayoutConstraint *_synopsisTrailingConstraint;
    UIImageViewAligned *_storyArtImage;
    NFUIVideoMetadataView *_metadataView;
    UIImageViewAligned *_titleTreatmentImage;
    UILabel *_synopsisLabel;
    NFUIListButton *_myListButton;
    PlayButton *_playButton;
    NSLayoutConstraint *_contentBottomConstraint;
    NSLayoutConstraint *_synopsisLabelTrailingConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *synopsisLabelTrailingConstraint; // @synthesize synopsisLabelTrailingConstraint=_synopsisLabelTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *contentBottomConstraint; // @synthesize contentBottomConstraint=_contentBottomConstraint;
@property(nonatomic) __weak PlayButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak NFUIListButton *myListButton; // @synthesize myListButton=_myListButton;
@property(nonatomic) __weak UILabel *synopsisLabel; // @synthesize synopsisLabel=_synopsisLabel;
@property(nonatomic) __weak UIImageViewAligned *titleTreatmentImage; // @synthesize titleTreatmentImage=_titleTreatmentImage;
@property(nonatomic) __weak NFUIVideoMetadataView *metadataView; // @synthesize metadataView=_metadataView;
@property(nonatomic) __weak UIImageViewAligned *storyArtImage; // @synthesize storyArtImage=_storyArtImage;
@property(nonatomic) __weak NSLayoutConstraint *synopsisTrailingConstraint; // @synthesize synopsisTrailingConstraint=_synopsisTrailingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *myListBottomConstraint; // @synthesize myListBottomConstraint=_myListBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *textLogoLeadingConstraint; // @synthesize textLogoLeadingConstraint=_textLogoLeadingConstraint;
- (void).cxx_destruct;
- (void)setPlayButtonActionForTarget:(id)arg1 action:(SEL)arg2 withTag:(long long)arg3;
- (void)setMyListButtonActionForTarget:(id)arg1 action:(SEL)arg2 withTag:(long long)arg3;
- (void)configureWithEntity:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

