//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class CLLocation;
@protocol _TtP8libFunny16LocationObserver_;

@protocol _TtP8libFunny23LocationObserverService_ <NSObject>
@property(nonatomic, readonly) _Bool locationServicesEnabled;
@property(nonatomic, readonly) CLLocation *location;
@property(nonatomic, readonly) int authorizationStatus;
- (void)requestAlwaysAuthorization;
- (void)requestWhenInUseAuthorization;
- (void)stopUpdateLocation;
- (void)startUpdateLocation;
- (void)addObserver:(id <_TtP8libFunny16LocationObserver_>)arg1;
@end

