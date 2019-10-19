//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTResponder-Protocol.h"

@class NSArray, NSString, UIImageView, YTFormattedStringLabel, YTImageView;
@protocol YTResponder;

@interface YTRequiredSignInAccountView : UIView <YTResponder>
{
    id <YTResponder> _parentResponder;
    YTImageView *_avatarImageView;
    UIView *_nameAndArrowView;
    YTFormattedStringLabel *_nameLabel;
    UIImageView *_arrowExpandImageView;
    YTFormattedStringLabel *_emailLabel;
    NSArray *_nameAndEmailMarginPairs;
}

@property(retain, nonatomic) NSArray *nameAndEmailMarginPairs; // @synthesize nameAndEmailMarginPairs=_nameAndEmailMarginPairs;
@property(retain, nonatomic) YTFormattedStringLabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) UIImageView *arrowExpandImageView; // @synthesize arrowExpandImageView=_arrowExpandImageView;
@property(retain, nonatomic) YTFormattedStringLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) UIView *nameAndArrowView; // @synthesize nameAndArrowView=_nameAndArrowView;
@property(readonly, nonatomic) YTImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)accessibilityElements;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithAccountName:(id)arg1 email:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

