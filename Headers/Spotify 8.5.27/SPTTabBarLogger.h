//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTTabBarLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)tabBar_pageURIFromViewController:(id)arg1;
- (void)logAppearEventForFriendlyName:(id)arg1 viewController:(id)arg2 index:(unsigned long long)arg3;
- (void)logOpenEventForTargetViewController:(id)arg1 fromViewController:(id)arg2 index:(unsigned long long)arg3;
- (id)initWithLogCenter:(id)arg1;

@end

