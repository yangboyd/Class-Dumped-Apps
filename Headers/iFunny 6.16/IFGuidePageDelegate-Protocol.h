//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class IFFeedViewController, IFMenuViewController, UIViewController;

@protocol IFGuidePageDelegate <NSObject>
- (void)guideCompleted;

@optional
@property(readonly, nonatomic) IFMenuViewController *menu;
@property(readonly, nonatomic) IFFeedViewController *feed;
@property(readonly) UIViewController *rootViewController;
- (void)singleGuideCompleted;
@end

