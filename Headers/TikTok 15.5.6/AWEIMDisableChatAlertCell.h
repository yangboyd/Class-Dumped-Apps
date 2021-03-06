//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEIMChatModel, AWEIMDisableChatConfig, AWEUserNameLabel, UIImageView, UILabel;
@protocol AWEIMChatListTableViewCellLayout;

@interface AWEIMDisableChatAlertCell : UITableViewCell
{
    AWEIMChatModel *_chat;
    id <AWEIMChatListTableViewCellLayout> _layout;
    UIImageView *_avatarView;
    AWEUserNameLabel *_nameLabel;
    UILabel *_messageLabel;
    UILabel *_timeLabel;
    AWEIMDisableChatConfig *_disableChatConfig;
}

@property(retain, nonatomic) AWEIMDisableChatConfig *disableChatConfig; // @synthesize disableChatConfig=_disableChatConfig;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) AWEUserNameLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) id <AWEIMChatListTableViewCellLayout> layout; // @synthesize layout=_layout;
@property(retain, nonatomic) AWEIMChatModel *chat; // @synthesize chat=_chat;
- (void).cxx_destruct;
- (id)chatBackgroundColor;
- (void)layoutSubviews;
- (void)p_setupUI;
- (void)configWithChat:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

