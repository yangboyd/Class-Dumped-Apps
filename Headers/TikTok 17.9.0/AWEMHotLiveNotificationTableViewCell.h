//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMTNotificationBaseTableViewCell.h"

@class NSArray, NSLayoutConstraint, TIKTOKNotificationButton, UIImageView, UILabel, UIView;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEMHotLiveNotificationTableViewCell : AWEMTNotificationBaseTableViewCell
{
    _Bool _enableAnimation;
    double _watchButtonWidth;
    UIImageView *_avatarView;
    UILabel *_textView;
    TIKTOKNotificationButton *_watchButton;
    NSLayoutConstraint *_watchButtonWidthConstraint;
    long long _indexOfAvatar;
    UIView<AWEFeedLiveMarkViewProtocol> *_liveMarkView;
    NSArray *_liveModelList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *liveModelList; // @synthesize liveModelList=_liveModelList;
@property(retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView; // @synthesize liveMarkView=_liveMarkView;
@property(nonatomic) long long indexOfAvatar; // @synthesize indexOfAvatar=_indexOfAvatar;
@property(nonatomic) _Bool enableAnimation; // @synthesize enableAnimation=_enableAnimation;
@property(retain, nonatomic) NSLayoutConstraint *watchButtonWidthConstraint; // @synthesize watchButtonWidthConstraint=_watchButtonWidthConstraint;
@property(retain, nonatomic) TIKTOKNotificationButton *watchButton; // @synthesize watchButton=_watchButton;
@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) double watchButtonWidth; // @synthesize watchButtonWidth=_watchButtonWidth;
- (void)_setLiveMaskViewConstraint;
- (void)_startAvatarAnimation;
- (void)stopAvatarAnimation;
- (void)startAvatarAnimation;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)didMoveToWindow;
- (void)didSelectCellAtIndexPath:(id)arg1;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (void)watchLiveButtonPressed:(id)arg1;
- (id)liveAttributedString;
- (void)unRegisterNotification;
- (void)registerNotification;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

