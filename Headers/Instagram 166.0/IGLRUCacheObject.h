//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGLRUCacheObject : NSObject
{
    id _object;
    unsigned long long _cost;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (id)initWithObject:(id)arg1 cost:(unsigned long long)arg2;

@end

