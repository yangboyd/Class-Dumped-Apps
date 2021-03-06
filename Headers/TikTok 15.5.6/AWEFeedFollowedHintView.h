//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AWEFeedFollowedHintView : UIView
{
    UILabel *_titleLabel;
    UILabel *_nameLabel;
    UIImageView *_redCoverView;
    UIImageView *_checkMarkView;
    UIView *_avatarButton;
    UIView *_followAnimationView;
}

@property(nonatomic) __weak UIView *followAnimationView; // @synthesize followAnimationView=_followAnimationView;
@property(retain, nonatomic) UIView *avatarButton; // @synthesize avatarButton=_avatarButton;
@property(retain, nonatomic) UIImageView *checkMarkView; // @synthesize checkMarkView=_checkMarkView;
@property(retain, nonatomic) UIImageView *redCoverView; // @synthesize redCoverView=_redCoverView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)p_dissmissAnimation;
- (void)removeAnimation;
- (void)showAnimationWithPreviousView:(id)arg1 avatarButton:(id)arg2 followAnimationView:(id)arg3 isLive:(_Bool)arg4;
- (void)setDisplayName:(id)arg1;
- (void)p_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

