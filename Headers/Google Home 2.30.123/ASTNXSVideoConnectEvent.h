//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnalyticsEvent.h"

@class NXSAnalyticsSocketConnectEvent;

@interface ASTNXSVideoConnectEvent : AnalyticsEvent
{
    NXSAnalyticsSocketConnectEvent *_socketConnectEvent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NXSAnalyticsSocketConnectEvent *socketConnectEvent; // @synthesize socketConnectEvent=_socketConnectEvent;
- (id)createChromecastAppLog;
- (id)initWithSocketConnectEvent:(id)arg1;

@end

