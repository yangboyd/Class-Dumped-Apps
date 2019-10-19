//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationBar.h>

@class UILabel, UIView;

@interface NetflixNavigationBar : UINavigationBar
{
    UIView *_backgroundView;
    UIView *_notificationBadge;
    UILabel *_notificationCountLabel;
}

@property(nonatomic) __weak UILabel *notificationCountLabel; // @synthesize notificationCountLabel=_notificationCountLabel;
@property(nonatomic) __weak UIView *notificationBadge; // @synthesize notificationBadge=_notificationBadge;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)updateWithNotificationCount:(unsigned long long)arg1;
- (void)updateBadgePosition;
- (void)configureBadge;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

