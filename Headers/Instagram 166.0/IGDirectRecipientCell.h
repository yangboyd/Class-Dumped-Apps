//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FBShapeView, IGDirectShareSheetOneTapButton, IGImageTitleSubtitleView, IGTapButton, UIImageView, UILabel, UILongPressGestureRecognizer, UIView;
@protocol IGDirectRecipientCellDelegate><IGDirectShareSheetOneTapDelegate;

@interface IGDirectRecipientCell : UICollectionViewCell
{
    double _dottedImageAccessoryViewSize;
    double _dottedImageAccessoryViewLineWidth;
    IGTapButton *_dismissXIconButton;
    IGDirectShareSheetOneTapButton *_sendButtonAccessoryView;
    IGDirectShareSheetOneTapButton *_oneTapButton;
    id <IGDirectRecipientCellDelegate><IGDirectShareSheetOneTapDelegate> _delegate;
    IGImageTitleSubtitleView *_coreView;
    UIImageView *_imageAccessoryView;
    FBShapeView *_dottedImageAccessoryView;
    FBShapeView *_smallDottedImageAccessoryView;
    UIView *_loadingIndicatorAccessoryView;
    UILabel *_moreLabel;
    UILongPressGestureRecognizer *_gesture;
    UIImageView *_chevronView;
}

+ (struct CGSize)preferredSizeForConstrainingSize:(struct CGSize)arg1 viewModel:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(readonly, nonatomic) UILongPressGestureRecognizer *gesture; // @synthesize gesture=_gesture;
@property(readonly, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(readonly, nonatomic) UIView *loadingIndicatorAccessoryView; // @synthesize loadingIndicatorAccessoryView=_loadingIndicatorAccessoryView;
@property(readonly, nonatomic) FBShapeView *smallDottedImageAccessoryView; // @synthesize smallDottedImageAccessoryView=_smallDottedImageAccessoryView;
@property(readonly, nonatomic) FBShapeView *dottedImageAccessoryView; // @synthesize dottedImageAccessoryView=_dottedImageAccessoryView;
@property(readonly, nonatomic) UIImageView *imageAccessoryView; // @synthesize imageAccessoryView=_imageAccessoryView;
@property(readonly, nonatomic) IGImageTitleSubtitleView *coreView; // @synthesize coreView=_coreView;
@property(nonatomic) __weak id <IGDirectRecipientCellDelegate><IGDirectShareSheetOneTapDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGDirectShareSheetOneTapButton *oneTapButton; // @synthesize oneTapButton=_oneTapButton;
@property(readonly, nonatomic) IGDirectShareSheetOneTapButton *sendButtonAccessoryView; // @synthesize sendButtonAccessoryView=_sendButtonAccessoryView;
- (id)accessibilityElements;
- (_Bool)isAccessibilityElement;
- (void)_onLongPress:(id)arg1;
- (void)_didTapSubtitle;
- (void)_didTapCameraButton:(id)arg1;
- (void)_didTapChevronButton:(id)arg1;
- (void)prepareForReuse;
- (void)_setupChevronView;
- (id)_accessoryViewForCellWithOneTapSendEnabled:(_Bool)arg1 oneTapSendButtonViewModel:(id)arg2 showLoadingIndicator:(_Bool)arg3 isShhMode:(_Bool)arg4 isSelected:(_Bool)arg5 delegate:(id)arg6;
- (void)_setupSubtitleTapHandling;
- (void)_setupMoreLabel;
- (void)_updateDottedAccessoryViewWithIconSize:(double)arg1 iconBorderWidth:(double)arg2;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)_onDismissButtonTapped:(id)arg1;
- (void)_setupDismissButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

