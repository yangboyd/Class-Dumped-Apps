//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEShareRowView.h"

@class UIColor, UIFont;

@interface AWEShareInviteFriendsRowView : AWEShareRowView
{
    UIFont *_customTitleFont;
    UIColor *_customTitleColor;
}

+ (double)rowHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *customTitleColor; // @synthesize customTitleColor=_customTitleColor;
@property(retain, nonatomic) UIFont *customTitleFont; // @synthesize customTitleFont=_customTitleFont;
- (void)updateCell:(id)arg1 withItem:(id)arg2;
- (void)setMinimumLineSpacing:(double)arg1;

@end

