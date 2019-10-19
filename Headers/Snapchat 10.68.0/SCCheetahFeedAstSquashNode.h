//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCCheetahFeedAstNode;

@interface SCCheetahFeedAstSquashNode : NSObject <NSCopying, NSCoding>
{
    SCCheetahFeedAstNode *_variable;
    double _linearRegion;
    double _limit;
}

@property(readonly, nonatomic) double limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) double linearRegion; // @synthesize linearRegion=_linearRegion;
@property(readonly, copy, nonatomic) SCCheetahFeedAstNode *variable; // @synthesize variable=_variable;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVariable:(id)arg1 linearRegion:(double)arg2 limit:(double)arg3;
- (id)initWithCoder:(id)arg1;

@end

