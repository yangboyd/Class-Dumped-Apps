//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayerItem;
@protocol NFPlayerBoundaryObserver;

@interface NFBoundaryObserverRegistration : NSObject
{
    id _opaqueObserver;
    id <NFPlayerBoundaryObserver> _observer;
    AVPlayerItem *_playerItem;
    id _context;
    double _time;
    double _registrationTime;
}

@property(nonatomic) double registrationTime; // @synthesize registrationTime=_registrationTime;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) __weak id context; // @synthesize context=_context;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) __weak id <NFPlayerBoundaryObserver> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) id opaqueObserver; // @synthesize opaqueObserver=_opaqueObserver;
- (void).cxx_destruct;

@end

