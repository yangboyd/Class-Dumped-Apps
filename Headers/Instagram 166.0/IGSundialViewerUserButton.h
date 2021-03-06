//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGBouncyButton.h>

@class IGImageView, IGUser, NSString, NSURL, UIImageView, UILabel;

@interface IGSundialViewerUserButton : IGBouncyButton
{
    IGImageView *_profilePictureImageView;
    UILabel *_userNameLabel;
    UIImageView *_verifiedBadgeImageView;
    _Bool _verified;
    IGUser *_user;
    long long _style;
    long long _textVerticleAlignment;
    NSURL *_profilePictureURL;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool verified; // @synthesize verified=_verified;
@property(retain, nonatomic) NSURL *profilePictureURL; // @synthesize profilePictureURL=_profilePictureURL;
@property(readonly, nonatomic) IGImageView *profilePictureImageView; // @synthesize profilePictureImageView=_profilePictureImageView;
@property(readonly, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(nonatomic) long long textVerticleAlignment; // @synthesize textVerticleAlignment=_textVerticleAlignment;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *userName;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1;

@end

