//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SIGTabBarViewItem : NSObject
{
    _Bool _selected;
    _Bool _wantsAnimation;
    NSString *_text;
    id _target;
    SEL _selector;
}

+ (id)tabBarViewItemWithText:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)tabBarViewItemWithText:(id)arg1;
@property(readonly, nonatomic) _Bool wantsAnimation; // @synthesize wantsAnimation=_wantsAnimation;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithText:(id)arg1 target:(id)arg2 selector:(SEL)arg3;

@end

