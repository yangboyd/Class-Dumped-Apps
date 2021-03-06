//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/PRMSchedule.h>

#import <drive_extension_framework/PRMViewControllerStateObserver-Protocol.h>

@class NSString, PRMViewControllerFilter;

@interface PRMViewControllerSchedule : PRMSchedule <PRMViewControllerStateObserver>
{
    unsigned long long _eventCode;
    PRMViewControllerFilter *_viewControllerFilter;
}

- (void).cxx_destruct;
- (void)triggerForViewController:(id)arg1;
- (id)observationQueue;
- (void)invalidate;
- (_Bool)activate;
- (void)dealloc;
- (id)initWithEventWithCode:(unsigned long long)arg1 applicationStateListener:(id)arg2 viewControllerFilter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

