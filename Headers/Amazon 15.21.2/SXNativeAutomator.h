//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface SXNativeAutomator : NSObject
{
    id _notificationObserver;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

+ (id)sharedAutomator;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(retain, nonatomic) id notificationObserver; // @synthesize notificationObserver=_notificationObserver;
- (void).cxx_destruct;
- (void)searchFor:(id)arg1;
- (void)tryStartSearchAutomation;

@end

