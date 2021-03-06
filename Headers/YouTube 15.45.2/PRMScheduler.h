//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/PRMScheduler-Protocol.h>

@class NSString, PRMApplicationStateListener, PRMViewControllerFilter;
@protocol PRMSchedule;

@interface PRMScheduler : NSObject <PRMScheduler>
{
    PRMApplicationStateListener *_applicationStateListener;
    PRMViewControllerFilter *_viewControllerFilter;
    id <PRMSchedule> _schedules[15];
    _Bool _invalidated;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PRMViewControllerFilter *viewControllerFilter; // @synthesize viewControllerFilter=_viewControllerFilter;
- (id)scheduleForEventCode:(unsigned long long)arg1;
- (void)invalidate;
- (void)setViewControllerFilter:(CDUnknownBlockType)arg1;
- (void)registerCallback:(CDUnknownBlockType)arg1 eventCodes:(id)arg2;
- (void)registerCallback:(CDUnknownBlockType)arg1 eventCode:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithApplicationStateListener:(id)arg1;
- (id)swizzledScheduleForEventCode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

