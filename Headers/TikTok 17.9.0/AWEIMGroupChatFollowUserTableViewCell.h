//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEIMUser, NSString, UIButton, UIImageView, UILabel, UIView;

@interface AWEIMGroupChatFollowUserTableViewCell : UITableViewCell
{
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIButton *_followBtn;
    UIView *_splitLine;
    AWEIMUser *_user;
    NSString *_conversationID;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) AWEIMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void)p_enterUserProfile;
- (void)followBtnClicked:(id)arg1;
- (void)p_refreshAvatar;
- (void)configWithUser:(id)arg1;
- (void)p_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

