//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IESLiveUserModel, LiveRoomModel, RACDisposable, UIButton, UIImageView, UILabel;
@protocol IESLiveUserService;

@interface IESLiveMTMicUserProfileView : UIView
{
    CDUnknownBlockType _didClickProfile;
    UILabel *_nameLabel;
    UIImageView *_avatarView;
    UIButton *_followButtton;
    IESLiveUserModel *_userModel;
    LiveRoomModel *_room;
    RACDisposable *_disposable;
    id <IESLiveUserService> _userService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) IESLiveUserModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) UIButton *followButtton; // @synthesize followButtton=_followButtton;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) CDUnknownBlockType didClickProfile; // @synthesize didClickProfile=_didClickProfile;
- (void)tapFollowButtton;
- (void)tapAvatarViewTapped:(id)arg1;
- (void)updateWithFollowStatus:(long long)arg1;
- (void)p_updateWithUser:(id)arg1 room:(id)arg2;
- (void)addViews;
- (void)updateWithUserID:(id)arg1 secUserID:(id)arg2 room:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 user:(id)arg2 room:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

