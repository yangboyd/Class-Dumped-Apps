//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;

@interface TextViewLayoutCache : NSObject
{
    NSCache *_cache;
}

+ (id)instance;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)cacheHeight:(double)arg1 forText:(id)arg2 withFont:(id)arg3 atWidth:(double)arg4 numberOfLines:(unsigned long long)arg5;
- (void)cacheHeight:(double)arg1 forText:(id)arg2 withFont:(id)arg3 atWidth:(double)arg4;
- (double)heightForText:(id)arg1 withFont:(id)arg2 atWidth:(double)arg3 numberOfLines:(unsigned long long)arg4;
- (double)heightForText:(id)arg1 withFont:(id)arg2 atWidth:(double)arg3;
- (id)initWithCache:(id)arg1;

@end

