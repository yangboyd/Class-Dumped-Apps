//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray, NSString, UIBarButtonItem, UIView;

@interface DYNNavSettings : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_title;
    UIView *_titleView;
    _Bool _titleViewIsSelfSizing;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_rightBarButtonItem;
    NSArray *_additionalRightBarButtonItems;
    UIView *_bottomView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(readonly, nonatomic) NSArray *additionalRightBarButtonItems; // @synthesize additionalRightBarButtonItems=_additionalRightBarButtonItems;
@property(readonly, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(readonly, nonatomic) _Bool titleViewIsSelfSizing; // @synthesize titleViewIsSelfSizing=_titleViewIsSelfSizing;
@property(readonly, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqualToNavSettings:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNavSettings:(id)arg1;

@end

