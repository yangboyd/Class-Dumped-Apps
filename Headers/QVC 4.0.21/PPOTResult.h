//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError;

@interface PPOTResult : NSObject
{
    long long _type;
    NSDictionary *_response;
    NSError *_error;
    long long _target;
}

+ (id)errorUserInfo:(id)arg1;
+ (id)resultWithSpecificError:(id)arg1;
+ (id)resultWithPersistedRequestDataFetchError;
+ (id)resultWithError;
+ (id)resultWithCancel:(id)arg1;
+ (id)resultWithSuccess:(id)arg1;
+ (void)parseURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) long long target; // @synthesize target=_target;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end

