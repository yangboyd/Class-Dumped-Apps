//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WASearchEngineIndexContent : NSObject
{
    long long _indexLevel;
    NSArray *_contents;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(readonly, nonatomic) long long indexLevel; // @synthesize indexLevel=_indexLevel;
- (id)initWithIndexLevel:(long long)arg1 contents:(id)arg2;

@end

