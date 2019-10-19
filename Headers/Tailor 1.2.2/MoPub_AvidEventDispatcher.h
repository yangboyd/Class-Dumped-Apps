//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MoPub_AvidEvent, NSMutableArray;
@protocol MoPub_AvidEventDispatcherDelegate;

@interface MoPub_AvidEventDispatcher : NSObject
{
    _Bool _shouldWaitForReadyEvent;
    id <MoPub_AvidEventDispatcherDelegate> _delegate;
    MoPub_AvidEvent *_readyEvent;
    NSMutableArray *_eventBuffer;
}

@property(retain, nonatomic) NSMutableArray *eventBuffer; // @synthesize eventBuffer=_eventBuffer;
@property(nonatomic) _Bool shouldWaitForReadyEvent; // @synthesize shouldWaitForReadyEvent=_shouldWaitForReadyEvent;
@property(retain, nonatomic) MoPub_AvidEvent *readyEvent; // @synthesize readyEvent=_readyEvent;
@property(nonatomic) __weak id <MoPub_AvidEventDispatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)assertReadyEventReceived;
- (void)assertReadyEventAllowed;
- (void)assertItIsTheFirstReadyEvent;
- (void)pushBufferToDelegate;
- (void)forwardEventsFromBufferToDelegate;
- (void)postEvent:(id)arg1;
@property(readonly, nonatomic) _Bool isReadyEventReceived;
- (id)initWithShouldWaitForReadyEvent:(_Bool)arg1;

@end

