//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IESLivePopupItem, UIScrollView;

@protocol IESLivePopupDelegate <NSObject>
@property(readonly, nonatomic) __weak UIScrollView *insideListView;
@property(readonly, nonatomic) __weak IESLivePopupItem *item;
@property(readonly, nonatomic) _Bool listIsDragging;
@property(readonly, nonatomic) _Bool listDidReachTop;
@end

