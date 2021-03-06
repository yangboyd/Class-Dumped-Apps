//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEIMUser, NSString, UIImageView, UILabel;

@interface AWEIMGroupMemberCollectionCell : UICollectionViewCell
{
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    AWEIMUser *_user;
    NSString *_groupAlias;
}

+ (double)itemGap;
+ (struct CGSize)itemSize;
+ (id)identifier;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *groupAlias; // @synthesize groupAlias=_groupAlias;
@property(retain, nonatomic) AWEIMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void)p_updateUI;
- (void)configWithUser:(id)arg1 type:(long long)arg2 groupAlias:(id)arg3;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

