//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuBaseTableViewCell.h"

@class ASTIconLabelView, NSArray, NSLayoutConstraint, QTMButton, UIImageView, UILabel, UILongPressGestureRecognizer, UISwitch, UIView;
@protocol ASTMenuIconTableViewCellDelegate;

@interface ASTMenuIconTableViewCell : ASTMenuBaseTableViewCell
{
    NSLayoutConstraint *_cellBottomMarginLayoutConstraint;
    NSLayoutConstraint *_cellTopMarginLayoutConstraint;
    NSLayoutConstraint *_cellLeftMarginLayoutConstraint;
    NSLayoutConstraint *_cellRightMarginLayoutConstraint;
    NSLayoutConstraint *_separatorLeftMarginLayoutConstraint;
    NSLayoutConstraint *_separatorRightMarginLayoutConstraint;
    NSArray *_accessoryButtonStandardConstraints;
    NSArray *_accessoryDoubleButtonConstraints;
    UIView *_heightFillerView;
    id <ASTMenuIconTableViewCellDelegate> _delegate;
    ASTIconLabelView *_iconLabelView;
    double _bottomMargin;
    double _topMargin;
    double _leftMargin;
    double _rightMargin;
    NSLayoutConstraint *_accessoryViewWidthConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewVerticalAlignmentConstraint;
    UIImageView *_accessoryImageView;
    UISwitch *_accessorySwitch;
    QTMButton *_accessoryCheckbox;
    QTMButton *_accessoryButton;
    UILabel *_accessoryLabel;
    QTMButton *_accessoryCustomizeButton;
    UIView *_separatorView;
    UIView *_accessoryHolderView;
    double _separatorLeftMargin;
    double _separatorRightMargin;
    UIView *_shadowView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) double separatorRightMargin; // @synthesize separatorRightMargin=_separatorRightMargin;
@property(nonatomic) double separatorLeftMargin; // @synthesize separatorLeftMargin=_separatorLeftMargin;
@property(readonly, nonatomic) UIView *accessoryHolderView; // @synthesize accessoryHolderView=_accessoryHolderView;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) QTMButton *accessoryCustomizeButton; // @synthesize accessoryCustomizeButton=_accessoryCustomizeButton;
@property(readonly, nonatomic) UILabel *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(readonly, nonatomic) QTMButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(readonly, nonatomic) QTMButton *accessoryCheckbox; // @synthesize accessoryCheckbox=_accessoryCheckbox;
@property(readonly, nonatomic) UISwitch *accessorySwitch; // @synthesize accessorySwitch=_accessorySwitch;
@property(readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(readonly, nonatomic) NSLayoutConstraint *accessoryViewVerticalAlignmentConstraint; // @synthesize accessoryViewVerticalAlignmentConstraint=_accessoryViewVerticalAlignmentConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint; // @synthesize accessoryViewWidthConstraint=_accessoryViewWidthConstraint;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(readonly, nonatomic) ASTIconLabelView *iconLabelView; // @synthesize iconLabelView=_iconLabelView;
@property(nonatomic) __weak id <ASTMenuIconTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleLongPress:(id)arg1;
- (void)didChangeValueForCheckboxControl:(id)arg1;
- (void)didChangeValueForSwitchControl:(id)arg1;
- (void)fullWebIconImageDidLoad:(id)arg1;
- (void)setDoubleAccessoryLayout;
- (void)setupAccessoryLabelConstraints;
- (void)setupAccessoryLabelStyle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeAccessoryLabel;
- (void)dealloc;
- (void)addGestureRecognizers;
- (void)updateConstraints;
- (void)setUpConstraints;
- (void)setUpDefaultStyles;
- (void)setAlpha:(double)arg1;
- (void)addCustomSubViews;
- (void)setNetworkImage:(id)arg1 withTintColor:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setUp;
- (void)prepareForReuse;

@end

