//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTForegroundObserver-Protocol.h"

@protocol SPTForegroundObserverDelegate;

@interface _TtC16AppKernelFeature18ForegroundObserver : NSObject <SPTForegroundObserver>
{
    // Error parsing type: , name: isObserving
    // Error parsing type: , name: application
    // Error parsing type: , name: delegate
    // Error parsing type: , name: isAwake
}

- (void).cxx_destruct;
- (id)init;
- (void)applicationWillEnterForegroundNotification;
- (void)applicationDidEnterBackgroundNotification;
- (void)hibernate;
- (void)awaken;
@property(nonatomic) _Bool awake; // @synthesize awake=isAwake;
- (_Bool)isAwake;
@property(nonatomic) __weak id <SPTForegroundObserverDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

@end

