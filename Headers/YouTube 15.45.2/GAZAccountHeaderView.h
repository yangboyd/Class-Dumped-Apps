//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface GAZAccountHeaderView : UIView
{
    UIImageView *_avatarView;
    UILabel *_emailLabel;
    UILabel *_titleLabel;
    UIView *_identifierView;
    NSString *_title;
    UIImage *_avatar;
    NSString *_email;
    UIButton *_closeButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

