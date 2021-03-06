//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol GSCNavigationTransitioningDelegate;

@interface GSCNavigationOptions : NSObject
{
    long long _modalValue;
    long long _animatedValue;
    CDUnknownBlockType _completionBlock;
    NSDictionary *_customOptions;
    id <GSCNavigationTransitioningDelegate> _transitioningDelegate;
}

+ (id)builder;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *customOptions; // @synthesize customOptions=_customOptions;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) __weak id <GSCNavigationTransitioningDelegate> transitioningDelegate; // @synthesize transitioningDelegate=_transitioningDelegate;
- (id)toBuilder;
- (id)navigationOptionsMergedWith:(id)arg1;
@property(readonly, nonatomic, getter=isModal) _Bool modal;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;
- (id)initWithAnimatedValue:(long long)arg1 modalValue:(long long)arg2 transitioningDelegate:(id)arg3 customOptions:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

