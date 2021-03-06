//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, IGTooltipView, NSArray, NSAttributedString, UILabel;
@protocol IGGradientTextStickerTrayCellDelegate;

@interface IGGradientTextStickerTrayCell : UICollectionViewCell
{
    CAShapeLayer *_backdropLayer;
    UILabel *_label;
    double _currentAttachmentScale;
    IGTooltipView *_tooltipView;
    _Bool _hasBackdropShadow;
    NSAttributedString *_text;
    NSArray *_gradientColors;
    double _cellPadding;
    id <IGGradientTextStickerTrayCellDelegate> _delegate;
    struct UIEdgeInsets _textInsets;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGradientTextStickerTrayCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hasBackdropShadow; // @synthesize hasBackdropShadow=_hasBackdropShadow;
@property(nonatomic) double cellPadding; // @synthesize cellPadding=_cellPadding;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(copy, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(copy, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void)hideToolTip;
- (void)_showToolTipOnView:(id)arg1;
- (void)showToolTipIfPossibleWithContentView:(id)arg1 analyticsTag:(id)arg2 onView:(id)arg3;
- (double)_maxPointSizeForAttributedText:(id)arg1 constrainingWidth:(double)arg2;
- (void)_updateGradient;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

