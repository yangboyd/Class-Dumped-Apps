//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GAIRequestBuilder : NSObject
{
    NSString *userAgent_;
}

@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=userAgent_;
- (id)requestGetUrl:(id)arg1 payload:(id)arg2;
- (id)requestPostUrl:(id)arg1 payload:(id)arg2 compression:(unsigned long long)arg3;
- (id)baseRequest;
- (id)parametersForHit:(id)arg1;
- (id)parameterValueToString:(id)arg1;
- (id)encodeParameters:(id)arg1;
- (id)encodeParameter:(id)arg1 withValue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

