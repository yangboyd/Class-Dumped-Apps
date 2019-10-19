//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIBarButtonItem, UIView;

@protocol YTNavigationItemObservables <NSObject>
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property(nonatomic) _Bool leftItemsSupplementBackButton;
@property(copy, nonatomic) NSArray *rightBarButtonItems;
@property(copy, nonatomic) NSArray *leftBarButtonItems;
@property(nonatomic) _Bool hidesBackButton;
@property(retain, nonatomic) UIView *titleView;
@property(copy, nonatomic) NSString *title;
@end

