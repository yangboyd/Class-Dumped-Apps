//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface BDPPhoneNumberPermissionContentView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_phoneIconView;
    NSString *_phoneNumer;
    UIView *_containerView;
    UILabel *_phoneNumberLabel;
    UIView *_topBorder;
    UIView *_bottomBorder;
}

@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(retain, nonatomic) UILabel *phoneNumberLabel; // @synthesize phoneNumberLabel=_phoneNumberLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSString *phoneNumer; // @synthesize phoneNumer=_phoneNumer;
@property(retain, nonatomic) UIImageView *phoneIconView; // @synthesize phoneIconView=_phoneIconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)setupBorders;
- (void)setupPhoneNumberTitle;
- (void)setupPhoneNumberIcon;
- (void)setupContainer;
- (void)setupTitleLabel;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

