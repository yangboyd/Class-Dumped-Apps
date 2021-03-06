//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class UIView;
@protocol IAVisibilityTesterDelegate;

@protocol IAVisibilityTesterBuilder <NSObject>
@property(nonatomic) _Bool enablePolling;
@property(nonatomic) _Bool enableComplicatedChecks;
@property(nonatomic) double visibleFireDelay;
@property(nonatomic) _Bool isInFeed;
@property(nonatomic) double visibleOut;
@property(nonatomic) double visibleIn;
@property(nonatomic) __weak UIView *view;
@property(nonatomic) __weak id <IAVisibilityTesterDelegate> delegate;
@end

