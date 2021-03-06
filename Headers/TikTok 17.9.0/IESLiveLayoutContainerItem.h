//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveLayoutContainerView, NSMutableSet, NSString, UIView;

@interface IESLiveLayoutContainerItem : NSObject
{
    NSString *_viewType;
    IESLiveLayoutContainerView *_view;
    UIView *_contentView;
    NSMutableSet *_hiddenReasons;
    struct CGSize _size;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *hiddenReasons; // @synthesize hiddenReasons=_hiddenReasons;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(readonly, nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) IESLiveLayoutContainerView *view; // @synthesize view=_view;
@property(copy, nonatomic) NSString *viewType; // @synthesize viewType=_viewType;
- (_Bool)isHiddenForReason:(id)arg1;
- (_Bool)isHidden;
- (void)setHidden:(_Bool)arg1 forReason:(id)arg2;
- (void)remakeInsets:(id)arg1 size:(id)arg2;
- (void)setInsets:(struct UIEdgeInsets)arg1 size:(struct CGSize)arg2;
- (void)bindingView:(id)arg1 insets:(struct UIEdgeInsets)arg2 size:(struct CGSize)arg3;

@end

