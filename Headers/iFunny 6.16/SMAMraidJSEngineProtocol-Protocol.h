//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMAMraidJSEngineCommandProtocol-Protocol.h>

@class SMAMraidJSEngineBean;
@protocol SMAMraidJSEngineEventsProtocol, SMAMraidJSEngineMethodsProtocol, SMAMraidJSEnginePropertiesProtocol;

@protocol SMAMraidJSEngineProtocol <SMAMraidJSEngineCommandProtocol>
@property(readonly, nonatomic) SMAMraidJSEngineBean<SMAMraidJSEngineEventsProtocol> *events;
@property(readonly, nonatomic) SMAMraidJSEngineBean<SMAMraidJSEnginePropertiesProtocol> *properties;
@property(readonly, nonatomic) SMAMraidJSEngineBean<SMAMraidJSEngineMethodsProtocol> *methods;
@end

