//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GNSStrategy;

@interface GNSPublicationParams : NSObject <NSCopying>
{
    GNSStrategy *_strategy;
    CDUnknownBlockType _statusHandler;
    CDUnknownBlockType _permissionRequestHandler;
}

@property(copy, nonatomic) CDUnknownBlockType permissionRequestHandler; // @synthesize permissionRequestHandler=_permissionRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType statusHandler; // @synthesize statusHandler=_statusHandler;
@property(copy, nonatomic) GNSStrategy *strategy; // @synthesize strategy=_strategy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

