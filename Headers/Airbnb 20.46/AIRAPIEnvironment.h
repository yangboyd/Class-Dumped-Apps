//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface AIRAPIEnvironment : NSObject
{
    int _type;
    NSURL *_baseURL;
    NSString *_host;
}

+ (_Bool)isProductionOrNextEnvironment:(int)arg1;
+ (id)defaultEnvironmentForType:(int)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;
- (id)initWithType:(int)arg1 baseURL:(id)arg2 host:(id)arg3;

@end

