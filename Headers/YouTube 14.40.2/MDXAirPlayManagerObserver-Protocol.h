//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDXAirPlayManager;

@protocol MDXAirPlayManagerObserver <NSObject>
- (void)didEndAirPlayConnectionForAirPlayManager:(MDXAirPlayManager *)arg1;
- (void)didStartAirPlayConnectionForAirPlayManager:(MDXAirPlayManager *)arg1;
- (void)routeDidBecomeUnavailableForAirPlayManager:(MDXAirPlayManager *)arg1;
- (void)routeDidBecomeAvailableForAirPlayManager:(MDXAirPlayManager *)arg1;
@end

