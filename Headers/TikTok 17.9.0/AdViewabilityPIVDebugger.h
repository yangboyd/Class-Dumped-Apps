//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumberFormatter, UIView;

@interface AdViewabilityPIVDebugger : NSObject
{
    UIView *_adView;
    UIView *_debugContainerView;
    NSMutableArray *_debugViews;
    NSNumberFormatter *_formatter;
}

- (void).cxx_destruct;
- (void)p_setupSubviews;
- (void)didUpdatePIV:(id)arg1;
- (void)dealloc;
- (id)initWithAdView:(id)arg1;

@end

