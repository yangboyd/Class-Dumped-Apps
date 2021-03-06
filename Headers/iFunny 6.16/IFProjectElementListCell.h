//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;
@protocol IFProjectElementListCellDelegate;

@interface IFProjectElementListCell : UITableViewCell
{
    id <IFProjectElementListCellDelegate> _delegate;
    UIButton *_actionButton;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <IFProjectElementListCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cellTapped:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)configureWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

