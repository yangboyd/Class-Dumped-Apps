//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol GHKSmartJourneysButton, GHKSmartJourneysButtonDelegate;

@protocol GHKSmartJourneysButton <NSObject>
+ (id <GHKSmartJourneysButton>)createContactUsButton;
+ (id <GHKSmartJourneysButton>)createHelpCommunityButton;
@property(nonatomic) __weak id <GHKSmartJourneysButtonDelegate> delegate;
- (UIView *)uiView;
@end

