//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

@class _TtC8AppStore16DynamicTypeLabel;

@interface _TtC8AppStore24DetailCollectionViewCell : UICollectionViewCell
{
    // Error parsing type: , name: previousTitleTextColor
    // Error parsing type: , name: previousSubtitleTextColor
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: imageView
    // Error parsing type: , name: imageMarginRight
    // Error parsing type: , name: accessoryView
    // Error parsing type: , name: accessory
    // Error parsing type: , name: topDivider
    // Error parsing type: , name: topDividerInsets
    // Error parsing type: , name: showTopDivider
    // Error parsing type: , name: bottomDivider
    // Error parsing type: , name: bottomDividerInsets
    // Error parsing type: , name: showBottomDivider
    // Error parsing type: , name: accessoryAction
    // Error parsing type: , name: backgroundSelectionView
    // Error parsing type: , name: isSelectable
    // Error parsing type: , name: disabled
    // Error parsing type: , name: selectionHandler
    // Error parsing type: , name: tapGestureRecognizer
}

- (void).cxx_destruct;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilitySubtitleLabel;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityTitleLabel;
- (void)prepareForReuse;
- (void)didTapWithAccessoryView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)darkerSystemColorsStatusDidChange:(id)arg1;
- (void)wasTapped;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool highlighted;
- (_Bool)isHighlighted;
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;

@end

