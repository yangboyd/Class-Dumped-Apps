//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPCore;

@interface SPTMobileMediaKitAPKeepAliveHandler : NSObject
{
    SPCore *_core;
}

@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
- (void).cxx_destruct;
- (void)disable;
- (void)enable;
- (id)initWithCore:(id)arg1;

@end

