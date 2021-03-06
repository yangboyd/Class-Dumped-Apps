//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMTNotificationBaseTableViewCell.h"

@class TTTAttributedLabel, UIImageView;

@interface AWEMCommonNotificationTableViewCell : AWEMTNotificationBaseTableViewCell
{
    UIImageView *_avatarView;
    TTTAttributedLabel *_textView;
    UIImageView *_coverImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) TTTAttributedLabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (double)contentLabelWidth;
- (void)configAvatarBadgeIconWithUser:(id)arg1;
- (void)didTapUserView:(id)arg1;
- (void)_openWebView;
- (void)didSelectCellAtIndexPath:(id)arg1;
- (void)tapOnCoverImage:(id)arg1;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (id)p_emotionForAttributedString:(id)arg1;
- (id)adMusicallyAttributedStringWithTitle:(id)arg1 detail:(id)arg2 timestamp:(id)arg3;
- (id)someonePostMusicallyAttributedStringWithName:(id)arg1 timestamp:(id)arg2;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

