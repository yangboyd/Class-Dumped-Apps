//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, PRMEventName;

@interface PRMEventContext : NSObject <NSCopying>
{
    unsigned long long _eventCode;
    PRMEventName *_eventName;
    NSString *_viewControllerName;
}

@property(readonly, copy, nonatomic) NSString *viewControllerName; // @synthesize viewControllerName=_viewControllerName;
@property(readonly, nonatomic) PRMEventName *eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) unsigned long long eventCode; // @synthesize eventCode=_eventCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithEventCode:(unsigned long long)arg1 eventName:(id)arg2 viewControllerName:(id)arg3;
- (id)initWithEventCode:(unsigned long long)arg1;
- (id)initWithEventName:(id)arg1;

@end

