//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseTableViewCell.h>

@class BaseButton, BaseLabel, ChatAvatarImageView, NSString;
@protocol ModUserListable, ModUserTableCellDelegate;

@interface ModUserTableCell : BaseTableViewCell
{
    id <ModUserTableCellDelegate> _delegate;
    NSString *_url;
    ChatAvatarImageView *_iconView;
    BaseLabel *_mainLabel;
    BaseLabel *_detailsLabel;
    BaseButton *_overflowButton;
    id <ModUserListable> _user;
}

@property(retain, nonatomic) id <ModUserListable> user; // @synthesize user=_user;
@property(retain, nonatomic) BaseButton *overflowButton; // @synthesize overflowButton=_overflowButton;
@property(retain, nonatomic) BaseLabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(retain, nonatomic) BaseLabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) ChatAvatarImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak id <ModUserTableCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)overflowButtonPressed:(id)arg1;
- (void)setupLayout;
- (void)configureWithUser:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

