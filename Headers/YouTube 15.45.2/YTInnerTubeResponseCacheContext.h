//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, YTMonotonicDate;

@interface YTInnerTubeResponseCacheContext : NSObject
{
    _Bool _promoted;
    NSDate *_responseDate;
    YTMonotonicDate *_expirationDate;
    NSString *_entityTag;
}

+ (id)cacheContextWithResponseContext:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool promoted; // @synthesize promoted=_promoted;
@property(readonly, nonatomic) NSString *entityTag; // @synthesize entityTag=_entityTag;
@property(readonly, nonatomic) YTMonotonicDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSDate *responseDate; // @synthesize responseDate=_responseDate;
- (id)promotedContext;
- (id)initWithMaxAgeSeconds:(unsigned int)arg1 entityTag:(id)arg2 promoted:(_Bool)arg3;
- (id)initWithExpirationDate:(id)arg1 entityTag:(id)arg2 promoted:(_Bool)arg3;

@end

