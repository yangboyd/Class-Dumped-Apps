//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface ASTConsentSelectionTableViewCell : UITableViewCell
{
    _Bool _optionSelected;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_checkIconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *checkIconImageView; // @synthesize checkIconImageView=_checkIconImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool optionSelected; // @synthesize optionSelected=_optionSelected;
- (double)contentMargin;
- (id)accessibilityLabel;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;

@end

