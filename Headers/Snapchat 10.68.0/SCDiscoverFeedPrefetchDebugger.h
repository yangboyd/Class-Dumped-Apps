//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface SCDiscoverFeedPrefetchDebugger : NSObject
{
    UIView *_debuggerView;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)reset;
- (void)_show;
- (void)updateviewItems:(id)arg1 viewPort:(struct CGRect)arg2;
- (void)setupView:(struct CGRect)arg1;

@end

