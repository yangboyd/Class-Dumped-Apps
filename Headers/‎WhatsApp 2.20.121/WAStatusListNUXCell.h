//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;
@protocol WAStatusListNUXCellDelegate;

@interface WAStatusListNUXCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_exitButton;
    UIButton *_privacyButton;
    id <WAStatusListNUXCellDelegate> _delegate;
}

+ (id)cellWithReuseIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WAStatusListNUXCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addAutolayoutConstraints;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)privacyButtonPressed;
- (void)exitButtonPressed;
- (void)reloadFonts;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

