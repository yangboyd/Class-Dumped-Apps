//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol SPTGaiaAirplayDisconnectPollerDelegate;

@interface SPTGaiaAirplayDisconnectPoller : NSObject
{
    id <SPTGaiaAirplayDisconnectPollerDelegate> _delegate;
    NSTimer *_airplayDisconnectTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *airplayDisconnectTimer; // @synthesize airplayDisconnectTimer=_airplayDisconnectTimer;
@property(nonatomic) __weak id <SPTGaiaAirplayDisconnectPollerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)poll;
- (void)stopPolling;
- (void)startPolling;

@end

