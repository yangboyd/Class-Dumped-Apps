//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface AMapNetHostStatic : NSObject
{
    NSString *_host;
    NSNumber *_requestCount;
    NSNumber *_faileCount;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *faileCount; // @synthesize faileCount=_faileCount;
@property(retain, nonatomic) NSNumber *requestCount; // @synthesize requestCount=_requestCount;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;

@end

